select msg,add1,sum(volM1) as volMQ11,sum(volM2) as volMQ12,sum(volM3) as  volMQ13,sum(volM1+volM2+volM3) as totalQ1  into #temp1 from testsum where qur=1 and years=2024 group by msg,add1
select msg,add1,sum(volM1) as volMQ21,sum(volM2) as volMQ22,sum(volM3) as  volMQ23,sum(volM1+volM2+volM3) as totalQ2 into #temp2 from testsum where qur=2 and years=2024 group by msg,add1
select msg,add1,sum(volM1) as volMQ31,sum(volM2) as volMQ32,sum(volM3) as  volMQ33,sum(volM1+volM2+volM3) as totalQ3 into #temp3 from testsum where qur=3 and years=2024 group by msg,add1

select  a.*,b.volMQ21,b.volMQ22,b.volMQ23,b.totalQ2,c.volMQ31,c.volMQ32,c.volMQ33,c.totalQ3 from #temp1 a inner join #temp2 b on a.msg=b.msg inner join #temp3 c on a.msg=c.msg


https://github.com/stonewallmhk/SQL-Server-Training/blob/master/RLS-Hospital-Demo.sql
