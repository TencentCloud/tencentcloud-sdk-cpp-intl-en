/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCEDASHBOARD_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCEDASHBOARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPC resource dashboard (all resource counts)
                */
                class ResourceDashboard : public AbstractModel
                {
                public:
                    ResourceDashboard();
                    ~ResourceDashboard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vpc instance ID, e.g. vpc-f1xjkw1b.
                     * @return VpcId Vpc instance ID, e.g. vpc-f1xjkw1b.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc instance ID, e.g. vpc-f1xjkw1b.
                     * @param VpcId Vpc instance ID, e.g. vpc-f1xjkw1b.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet instance ID, such as subnet-bthucmmy.
                     * @return SubnetId Subnet instance ID, such as subnet-bthucmmy.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID, such as subnet-bthucmmy.
                     * @param SubnetId Subnet instance ID, such as subnet-bthucmmy.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Classiclink.
                     * @return Classiclink Classiclink.
                     */
                    uint64_t GetClassiclink() const;

                    /**
                     * 设置Classiclink.
                     * @param Classiclink Classiclink.
                     */
                    void SetClassiclink(const uint64_t& _classiclink);

                    /**
                     * 判断参数 Classiclink 是否已赋值
                     * @return Classiclink 是否已赋值
                     */
                    bool ClassiclinkHasBeenSet() const;

                    /**
                     * 获取Direct Connect gateway.
                     * @return Dcg Direct Connect gateway.
                     */
                    uint64_t GetDcg() const;

                    /**
                     * 设置Direct Connect gateway.
                     * @param Dcg Direct Connect gateway.
                     */
                    void SetDcg(const uint64_t& _dcg);

                    /**
                     * 判断参数 Dcg 是否已赋值
                     * @return Dcg 是否已赋值
                     */
                    bool DcgHasBeenSet() const;

                    /**
                     * 获取Peering connection.
                     * @return Pcx Peering connection.
                     */
                    uint64_t GetPcx() const;

                    /**
                     * 设置Peering connection.
                     * @param Pcx Peering connection.
                     */
                    void SetPcx(const uint64_t& _pcx);

                    /**
                     * 判断参数 Pcx 是否已赋值
                     * @return Pcx 是否已赋值
                     */
                    bool PcxHasBeenSet() const;

                    /**
                     * 获取The total number of used IP addresses.
                     * @return Ip The total number of used IP addresses.
                     */
                    uint64_t GetIp() const;

                    /**
                     * 设置The total number of used IP addresses.
                     * @param Ip The total number of used IP addresses.
                     */
                    void SetIp(const uint64_t& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取NAT gateway.
                     * @return Nat NAT gateway.
                     */
                    uint64_t GetNat() const;

                    /**
                     * 设置NAT gateway.
                     * @param Nat NAT gateway.
                     */
                    void SetNat(const uint64_t& _nat);

                    /**
                     * 判断参数 Nat 是否已赋值
                     * @return Nat 是否已赋值
                     */
                    bool NatHasBeenSet() const;

                    /**
                     * 获取VPN gateway.
                     * @return Vpngw VPN gateway.
                     */
                    uint64_t GetVpngw() const;

                    /**
                     * 设置VPN gateway.
                     * @param Vpngw VPN gateway.
                     */
                    void SetVpngw(const uint64_t& _vpngw);

                    /**
                     * 判断参数 Vpngw 是否已赋值
                     * @return Vpngw 是否已赋值
                     */
                    bool VpngwHasBeenSet() const;

                    /**
                     * 获取Flow log.
                     * @return FlowLog Flow log.
                     */
                    uint64_t GetFlowLog() const;

                    /**
                     * 设置Flow log.
                     * @param FlowLog Flow log.
                     */
                    void SetFlowLog(const uint64_t& _flowLog);

                    /**
                     * 判断参数 FlowLog 是否已赋值
                     * @return FlowLog 是否已赋值
                     */
                    bool FlowLogHasBeenSet() const;

                    /**
                     * 获取Network probing.
                     * @return NetworkDetect Network probing.
                     */
                    uint64_t GetNetworkDetect() const;

                    /**
                     * 设置Network probing.
                     * @param NetworkDetect Network probing.
                     */
                    void SetNetworkDetect(const uint64_t& _networkDetect);

                    /**
                     * 判断参数 NetworkDetect 是否已赋值
                     * @return NetworkDetect 是否已赋值
                     */
                    bool NetworkDetectHasBeenSet() const;

                    /**
                     * 获取Network ACL.
                     * @return NetworkACL Network ACL.
                     */
                    uint64_t GetNetworkACL() const;

                    /**
                     * 设置Network ACL.
                     * @param NetworkACL Network ACL.
                     */
                    void SetNetworkACL(const uint64_t& _networkACL);

                    /**
                     * 判断参数 NetworkACL 是否已赋值
                     * @return NetworkACL 是否已赋值
                     */
                    bool NetworkACLHasBeenSet() const;

                    /**
                     * 获取Cloud Virtual Machine.
                     * @return CVM Cloud Virtual Machine.
                     */
                    uint64_t GetCVM() const;

                    /**
                     * 设置Cloud Virtual Machine.
                     * @param CVM Cloud Virtual Machine.
                     */
                    void SetCVM(const uint64_t& _cVM);

                    /**
                     * 判断参数 CVM 是否已赋值
                     * @return CVM 是否已赋值
                     */
                    bool CVMHasBeenSet() const;

                    /**
                     * 获取Load balancer.
                     * @return LB Load balancer.
                     */
                    uint64_t GetLB() const;

                    /**
                     * 设置Load balancer.
                     * @param LB Load balancer.
                     */
                    void SetLB(const uint64_t& _lB);

                    /**
                     * 判断参数 LB 是否已赋值
                     * @return LB 是否已赋值
                     */
                    bool LBHasBeenSet() const;

                    /**
                     * 获取Relational database.
                     * @return CDB Relational database.
                     */
                    uint64_t GetCDB() const;

                    /**
                     * 设置Relational database.
                     * @param CDB Relational database.
                     */
                    void SetCDB(const uint64_t& _cDB);

                    /**
                     * 判断参数 CDB 是否已赋值
                     * @return CDB 是否已赋值
                     */
                    bool CDBHasBeenSet() const;

                    /**
                     * 获取TencentDB for Memcached.
                     * @return Cmem TencentDB for Memcached.
                     */
                    uint64_t GetCmem() const;

                    /**
                     * 设置TencentDB for Memcached.
                     * @param Cmem TencentDB for Memcached.
                     */
                    void SetCmem(const uint64_t& _cmem);

                    /**
                     * 判断参数 Cmem 是否已赋值
                     * @return Cmem 是否已赋值
                     */
                    bool CmemHasBeenSet() const;

                    /**
                     * 获取Cloud time series database.
                     * @return CTSDB Cloud time series database.
                     */
                    uint64_t GetCTSDB() const;

                    /**
                     * 设置Cloud time series database.
                     * @param CTSDB Cloud time series database.
                     */
                    void SetCTSDB(const uint64_t& _cTSDB);

                    /**
                     * 判断参数 CTSDB 是否已赋值
                     * @return CTSDB 是否已赋值
                     */
                    bool CTSDBHasBeenSet() const;

                    /**
                     * 获取TencentDB for MariaDB (TDSQL).
                     * @return MariaDB TencentDB for MariaDB (TDSQL).
                     */
                    uint64_t GetMariaDB() const;

                    /**
                     * 设置TencentDB for MariaDB (TDSQL).
                     * @param MariaDB TencentDB for MariaDB (TDSQL).
                     */
                    void SetMariaDB(const uint64_t& _mariaDB);

                    /**
                     * 判断参数 MariaDB 是否已赋值
                     * @return MariaDB 是否已赋值
                     */
                    bool MariaDBHasBeenSet() const;

                    /**
                     * 获取TencentDB for SQL Server.
                     * @return SQLServer TencentDB for SQL Server.
                     */
                    uint64_t GetSQLServer() const;

                    /**
                     * 设置TencentDB for SQL Server.
                     * @param SQLServer TencentDB for SQL Server.
                     */
                    void SetSQLServer(const uint64_t& _sQLServer);

                    /**
                     * 判断参数 SQLServer 是否已赋值
                     * @return SQLServer 是否已赋值
                     */
                    bool SQLServerHasBeenSet() const;

                    /**
                     * 获取TencentDB for PostgreSQL.
                     * @return Postgres TencentDB for PostgreSQL.
                     */
                    uint64_t GetPostgres() const;

                    /**
                     * 设置TencentDB for PostgreSQL.
                     * @param Postgres TencentDB for PostgreSQL.
                     */
                    void SetPostgres(const uint64_t& _postgres);

                    /**
                     * 判断参数 Postgres 是否已赋值
                     * @return Postgres 是否已赋值
                     */
                    bool PostgresHasBeenSet() const;

                    /**
                     * 获取Network attached storage.
                     * @return NAS Network attached storage.
                     */
                    uint64_t GetNAS() const;

                    /**
                     * 设置Network attached storage.
                     * @param NAS Network attached storage.
                     */
                    void SetNAS(const uint64_t& _nAS);

                    /**
                     * 判断参数 NAS 是否已赋值
                     * @return NAS 是否已赋值
                     */
                    bool NASHasBeenSet() const;

                    /**
                     * 获取Snova data warehouse.
                     * @return Greenplumn Snova data warehouse.
                     */
                    uint64_t GetGreenplumn() const;

                    /**
                     * 设置Snova data warehouse.
                     * @param Greenplumn Snova data warehouse.
                     */
                    void SetGreenplumn(const uint64_t& _greenplumn);

                    /**
                     * 判断参数 Greenplumn 是否已赋值
                     * @return Greenplumn 是否已赋值
                     */
                    bool GreenplumnHasBeenSet() const;

                    /**
                     * 获取Cloud Kafka (CKafka).
                     * @return Ckafka Cloud Kafka (CKafka).
                     */
                    uint64_t GetCkafka() const;

                    /**
                     * 设置Cloud Kafka (CKafka).
                     * @param Ckafka Cloud Kafka (CKafka).
                     */
                    void SetCkafka(const uint64_t& _ckafka);

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     */
                    bool CkafkaHasBeenSet() const;

                    /**
                     * 获取Grocery.
                     * @return Grocery Grocery.
                     */
                    uint64_t GetGrocery() const;

                    /**
                     * 设置Grocery.
                     * @param Grocery Grocery.
                     */
                    void SetGrocery(const uint64_t& _grocery);

                    /**
                     * 判断参数 Grocery 是否已赋值
                     * @return Grocery 是否已赋值
                     */
                    bool GroceryHasBeenSet() const;

                    /**
                     * 获取Data encryption service.
                     * @return HSM Data encryption service.
                     */
                    uint64_t GetHSM() const;

                    /**
                     * 设置Data encryption service.
                     * @param HSM Data encryption service.
                     */
                    void SetHSM(const uint64_t& _hSM);

                    /**
                     * 判断参数 HSM 是否已赋值
                     * @return HSM 是否已赋值
                     */
                    bool HSMHasBeenSet() const;

                    /**
                     * 获取Game storage - Tcaplus.
                     * @return Tcaplus Game storage - Tcaplus.
                     */
                    uint64_t GetTcaplus() const;

                    /**
                     * 设置Game storage - Tcaplus.
                     * @param Tcaplus Game storage - Tcaplus.
                     */
                    void SetTcaplus(const uint64_t& _tcaplus);

                    /**
                     * 判断参数 Tcaplus 是否已赋值
                     * @return Tcaplus 是否已赋值
                     */
                    bool TcaplusHasBeenSet() const;

                    /**
                     * 获取Cnas.
                     * @return Cnas Cnas.
                     */
                    uint64_t GetCnas() const;

                    /**
                     * 设置Cnas.
                     * @param Cnas Cnas.
                     */
                    void SetCnas(const uint64_t& _cnas);

                    /**
                     * 判断参数 Cnas 是否已赋值
                     * @return Cnas 是否已赋值
                     */
                    bool CnasHasBeenSet() const;

                    /**
                     * 获取HTAP database - TiDB.
                     * @return TiDB HTAP database - TiDB.
                     */
                    uint64_t GetTiDB() const;

                    /**
                     * 设置HTAP database - TiDB.
                     * @param TiDB HTAP database - TiDB.
                     */
                    void SetTiDB(const uint64_t& _tiDB);

                    /**
                     * 判断参数 TiDB 是否已赋值
                     * @return TiDB 是否已赋值
                     */
                    bool TiDBHasBeenSet() const;

                    /**
                     * 获取EMR cluster.
                     * @return Emr EMR cluster.
                     */
                    uint64_t GetEmr() const;

                    /**
                     * 设置EMR cluster.
                     * @param Emr EMR cluster.
                     */
                    void SetEmr(const uint64_t& _emr);

                    /**
                     * 判断参数 Emr 是否已赋值
                     * @return Emr 是否已赋值
                     */
                    bool EmrHasBeenSet() const;

                    /**
                     * 获取SEAL.
                     * @return SEAL SEAL.
                     */
                    uint64_t GetSEAL() const;

                    /**
                     * 设置SEAL.
                     * @param SEAL SEAL.
                     */
                    void SetSEAL(const uint64_t& _sEAL);

                    /**
                     * 判断参数 SEAL 是否已赋值
                     * @return SEAL 是否已赋值
                     */
                    bool SEALHasBeenSet() const;

                    /**
                     * 获取Cloud file storage - CFS.
                     * @return CFS Cloud file storage - CFS.
                     */
                    uint64_t GetCFS() const;

                    /**
                     * 设置Cloud file storage - CFS.
                     * @param CFS Cloud file storage - CFS.
                     */
                    void SetCFS(const uint64_t& _cFS);

                    /**
                     * 判断参数 CFS 是否已赋值
                     * @return CFS 是否已赋值
                     */
                    bool CFSHasBeenSet() const;

                    /**
                     * 获取Oracle.
                     * @return Oracle Oracle.
                     */
                    uint64_t GetOracle() const;

                    /**
                     * 设置Oracle.
                     * @param Oracle Oracle.
                     */
                    void SetOracle(const uint64_t& _oracle);

                    /**
                     * 判断参数 Oracle 是否已赋值
                     * @return Oracle 是否已赋值
                     */
                    bool OracleHasBeenSet() const;

                    /**
                     * 获取
                     * @return ElasticSearch 
                     */
                    uint64_t GetElasticSearch() const;

                    /**
                     * 设置
                     * @param ElasticSearch 
                     */
                    void SetElasticSearch(const uint64_t& _elasticSearch);

                    /**
                     * 判断参数 ElasticSearch 是否已赋值
                     * @return ElasticSearch 是否已赋值
                     */
                    bool ElasticSearchHasBeenSet() const;

                    /**
                     * 获取Blockchain service.
                     * @return TBaaS Blockchain service.
                     */
                    uint64_t GetTBaaS() const;

                    /**
                     * 设置Blockchain service.
                     * @param TBaaS Blockchain service.
                     */
                    void SetTBaaS(const uint64_t& _tBaaS);

                    /**
                     * 判断参数 TBaaS 是否已赋值
                     * @return TBaaS 是否已赋值
                     */
                    bool TBaaSHasBeenSet() const;

                    /**
                     * 获取Itop.
                     * @return Itop Itop.
                     */
                    uint64_t GetItop() const;

                    /**
                     * 设置Itop.
                     * @param Itop Itop.
                     */
                    void SetItop(const uint64_t& _itop);

                    /**
                     * 判断参数 Itop 是否已赋值
                     * @return Itop 是否已赋值
                     */
                    bool ItopHasBeenSet() const;

                    /**
                     * 获取Cloud database audit.
                     * @return DBAudit Cloud database audit.
                     */
                    uint64_t GetDBAudit() const;

                    /**
                     * 设置Cloud database audit.
                     * @param DBAudit Cloud database audit.
                     */
                    void SetDBAudit(const uint64_t& _dBAudit);

                    /**
                     * 判断参数 DBAudit 是否已赋值
                     * @return DBAudit 是否已赋值
                     */
                    bool DBAuditHasBeenSet() const;

                    /**
                     * 获取Enterprise TencentDB - CynosDB for Postgres.
                     * @return CynosDBPostgres Enterprise TencentDB - CynosDB for Postgres.
                     */
                    uint64_t GetCynosDBPostgres() const;

                    /**
                     * 设置Enterprise TencentDB - CynosDB for Postgres.
                     * @param CynosDBPostgres Enterprise TencentDB - CynosDB for Postgres.
                     */
                    void SetCynosDBPostgres(const uint64_t& _cynosDBPostgres);

                    /**
                     * 判断参数 CynosDBPostgres 是否已赋值
                     * @return CynosDBPostgres 是否已赋值
                     */
                    bool CynosDBPostgresHasBeenSet() const;

                    /**
                     * 获取TencentDB for Redis.
                     * @return Redis TencentDB for Redis.
                     */
                    uint64_t GetRedis() const;

                    /**
                     * 设置TencentDB for Redis.
                     * @param Redis TencentDB for Redis.
                     */
                    void SetRedis(const uint64_t& _redis);

                    /**
                     * 判断参数 Redis 是否已赋值
                     * @return Redis 是否已赋值
                     */
                    bool RedisHasBeenSet() const;

                    /**
                     * 获取TencentDB for MongoDB.
                     * @return MongoDB TencentDB for MongoDB.
                     */
                    uint64_t GetMongoDB() const;

                    /**
                     * 设置TencentDB for MongoDB.
                     * @param MongoDB TencentDB for MongoDB.
                     */
                    void SetMongoDB(const uint64_t& _mongoDB);

                    /**
                     * 判断参数 MongoDB 是否已赋值
                     * @return MongoDB 是否已赋值
                     */
                    bool MongoDBHasBeenSet() const;

                    /**
                     * 获取A distributed cloud database - TencentDB for TDSQL.
                     * @return DCDB A distributed cloud database - TencentDB for TDSQL.
                     */
                    uint64_t GetDCDB() const;

                    /**
                     * 设置A distributed cloud database - TencentDB for TDSQL.
                     * @param DCDB A distributed cloud database - TencentDB for TDSQL.
                     */
                    void SetDCDB(const uint64_t& _dCDB);

                    /**
                     * 判断参数 DCDB 是否已赋值
                     * @return DCDB 是否已赋值
                     */
                    bool DCDBHasBeenSet() const;

                    /**
                     * 获取An enterprise-grade TencentDB - CynosDB for MySQL.
                     * @return CynosDBMySQL An enterprise-grade TencentDB - CynosDB for MySQL.
                     */
                    uint64_t GetCynosDBMySQL() const;

                    /**
                     * 设置An enterprise-grade TencentDB - CynosDB for MySQL.
                     * @param CynosDBMySQL An enterprise-grade TencentDB - CynosDB for MySQL.
                     */
                    void SetCynosDBMySQL(const uint64_t& _cynosDBMySQL);

                    /**
                     * 判断参数 CynosDBMySQL 是否已赋值
                     * @return CynosDBMySQL 是否已赋值
                     */
                    bool CynosDBMySQLHasBeenSet() const;

                    /**
                     * 获取Subnets.
                     * @return Subnet Subnets.
                     */
                    uint64_t GetSubnet() const;

                    /**
                     * 设置Subnets.
                     * @param Subnet Subnets.
                     */
                    void SetSubnet(const uint64_t& _subnet);

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     */
                    bool SubnetHasBeenSet() const;

                    /**
                     * 获取Route table.
                     * @return RouteTable Route table.
                     */
                    uint64_t GetRouteTable() const;

                    /**
                     * 设置Route table.
                     * @param RouteTable Route table.
                     */
                    void SetRouteTable(const uint64_t& _routeTable);

                    /**
                     * 判断参数 RouteTable 是否已赋值
                     * @return RouteTable 是否已赋值
                     */
                    bool RouteTableHasBeenSet() const;

                private:

                    /**
                     * Vpc instance ID, e.g. vpc-f1xjkw1b.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet instance ID, such as subnet-bthucmmy.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Classiclink.
                     */
                    uint64_t m_classiclink;
                    bool m_classiclinkHasBeenSet;

                    /**
                     * Direct Connect gateway.
                     */
                    uint64_t m_dcg;
                    bool m_dcgHasBeenSet;

                    /**
                     * Peering connection.
                     */
                    uint64_t m_pcx;
                    bool m_pcxHasBeenSet;

                    /**
                     * The total number of used IP addresses.
                     */
                    uint64_t m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * NAT gateway.
                     */
                    uint64_t m_nat;
                    bool m_natHasBeenSet;

                    /**
                     * VPN gateway.
                     */
                    uint64_t m_vpngw;
                    bool m_vpngwHasBeenSet;

                    /**
                     * Flow log.
                     */
                    uint64_t m_flowLog;
                    bool m_flowLogHasBeenSet;

                    /**
                     * Network probing.
                     */
                    uint64_t m_networkDetect;
                    bool m_networkDetectHasBeenSet;

                    /**
                     * Network ACL.
                     */
                    uint64_t m_networkACL;
                    bool m_networkACLHasBeenSet;

                    /**
                     * Cloud Virtual Machine.
                     */
                    uint64_t m_cVM;
                    bool m_cVMHasBeenSet;

                    /**
                     * Load balancer.
                     */
                    uint64_t m_lB;
                    bool m_lBHasBeenSet;

                    /**
                     * Relational database.
                     */
                    uint64_t m_cDB;
                    bool m_cDBHasBeenSet;

                    /**
                     * TencentDB for Memcached.
                     */
                    uint64_t m_cmem;
                    bool m_cmemHasBeenSet;

                    /**
                     * Cloud time series database.
                     */
                    uint64_t m_cTSDB;
                    bool m_cTSDBHasBeenSet;

                    /**
                     * TencentDB for MariaDB (TDSQL).
                     */
                    uint64_t m_mariaDB;
                    bool m_mariaDBHasBeenSet;

                    /**
                     * TencentDB for SQL Server.
                     */
                    uint64_t m_sQLServer;
                    bool m_sQLServerHasBeenSet;

                    /**
                     * TencentDB for PostgreSQL.
                     */
                    uint64_t m_postgres;
                    bool m_postgresHasBeenSet;

                    /**
                     * Network attached storage.
                     */
                    uint64_t m_nAS;
                    bool m_nASHasBeenSet;

                    /**
                     * Snova data warehouse.
                     */
                    uint64_t m_greenplumn;
                    bool m_greenplumnHasBeenSet;

                    /**
                     * Cloud Kafka (CKafka).
                     */
                    uint64_t m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * Grocery.
                     */
                    uint64_t m_grocery;
                    bool m_groceryHasBeenSet;

                    /**
                     * Data encryption service.
                     */
                    uint64_t m_hSM;
                    bool m_hSMHasBeenSet;

                    /**
                     * Game storage - Tcaplus.
                     */
                    uint64_t m_tcaplus;
                    bool m_tcaplusHasBeenSet;

                    /**
                     * Cnas.
                     */
                    uint64_t m_cnas;
                    bool m_cnasHasBeenSet;

                    /**
                     * HTAP database - TiDB.
                     */
                    uint64_t m_tiDB;
                    bool m_tiDBHasBeenSet;

                    /**
                     * EMR cluster.
                     */
                    uint64_t m_emr;
                    bool m_emrHasBeenSet;

                    /**
                     * SEAL.
                     */
                    uint64_t m_sEAL;
                    bool m_sEALHasBeenSet;

                    /**
                     * Cloud file storage - CFS.
                     */
                    uint64_t m_cFS;
                    bool m_cFSHasBeenSet;

                    /**
                     * Oracle.
                     */
                    uint64_t m_oracle;
                    bool m_oracleHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_elasticSearch;
                    bool m_elasticSearchHasBeenSet;

                    /**
                     * Blockchain service.
                     */
                    uint64_t m_tBaaS;
                    bool m_tBaaSHasBeenSet;

                    /**
                     * Itop.
                     */
                    uint64_t m_itop;
                    bool m_itopHasBeenSet;

                    /**
                     * Cloud database audit.
                     */
                    uint64_t m_dBAudit;
                    bool m_dBAuditHasBeenSet;

                    /**
                     * Enterprise TencentDB - CynosDB for Postgres.
                     */
                    uint64_t m_cynosDBPostgres;
                    bool m_cynosDBPostgresHasBeenSet;

                    /**
                     * TencentDB for Redis.
                     */
                    uint64_t m_redis;
                    bool m_redisHasBeenSet;

                    /**
                     * TencentDB for MongoDB.
                     */
                    uint64_t m_mongoDB;
                    bool m_mongoDBHasBeenSet;

                    /**
                     * A distributed cloud database - TencentDB for TDSQL.
                     */
                    uint64_t m_dCDB;
                    bool m_dCDBHasBeenSet;

                    /**
                     * An enterprise-grade TencentDB - CynosDB for MySQL.
                     */
                    uint64_t m_cynosDBMySQL;
                    bool m_cynosDBMySQLHasBeenSet;

                    /**
                     * Subnets.
                     */
                    uint64_t m_subnet;
                    bool m_subnetHasBeenSet;

                    /**
                     * Route table.
                     */
                    uint64_t m_routeTable;
                    bool m_routeTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCEDASHBOARD_H_
