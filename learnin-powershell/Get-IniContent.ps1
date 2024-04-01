<#
.SYNOPSIS
Gets the content of an INI file.
.DESCRIPTION
Gets the content of an INI file and returns it as a hashtable.
.INPUTS
System.String
.OUTPUTS
System.Collections.Hashtable
.PARAMETER FilePath
Specifies the path to the input INI file.
.EXAMPLE
C:\PS>$IniContent = Get-IniContent -FilePath file.ini
C:\PS>$IniContent['Section1'].Key1
Gets the content of file.ini and access Key1 from Section1.
.LINK
Out-IniFile
#>
function Get-IniContent
{
[CmdletBinding()]
Param
(
[Parameter(Mandatory=$true,ValueFromPipeline=$true)]
[ValidateNotNullOrEmpty()]
[ValidateScript({(Test-Path $_) -and ((Get-Item $_).Extension -eq ".ini")})]
[System.String]$FilePath
)
# Initialize output hash table.
$ini = @{}
switch -regex -file $FilePath
{
"^\[(.+)\]$" # Section
{
$section = $matches[1]
$ini[$section] = @{}
$CommentCount = 0
}
"^(;.*)$" # Comment
{
if( !($section) ){
$section = "No-Section"
$ini[$section] = @{}
}
$value = $matches[1]
$CommentCount = $CommentCount + 1
$name = "Comment" + $CommentCount
$ini[$section][$name] = $value
}
"(.+?)\s*=\s*(.*)" # Key
{
if( !($section) )
{
$section = "No-Section"
$ini[$section] = @{}
}
$name,$value = $matches[1..2]
$ini[$section][$name] = $value
}
}
return $ini
}
