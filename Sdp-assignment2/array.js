var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];
var max_element=friends[0];
for(var i=0;i<friends.length;i++)
{
    if(friends[i].length>max_element.length)
    {
        max_element=friends[i];
    }
}
console.log("the maximum length element is:"+max_element);