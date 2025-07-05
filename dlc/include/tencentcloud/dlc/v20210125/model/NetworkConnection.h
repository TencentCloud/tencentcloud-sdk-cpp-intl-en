/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_NETWORKCONNECTION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_NETWORKCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Network configuration
                */
                class NetworkConnection : public AbstractModel
                {
                public:
                    NetworkConnection();
                    ~NetworkConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Network configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Network configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Network configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Unique identifier of network configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AssociateId Unique identifier of network configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssociateId() const;

                    /**
                     * 设置Unique identifier of network configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _associateId Unique identifier of network configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssociateId(const std::string& _associateId);

                    /**
                     * 判断参数 AssociateId 是否已赋值
                     * @return AssociateId 是否已赋值
                     * 
                     */
                    bool AssociateIdHasBeenSet() const;

                    /**
                     * 获取Computing engine ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HouseId Computing engine ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHouseId() const;

                    /**
                     * 设置Computing engine ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _houseId Computing engine ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHouseId(const std::string& _houseId);

                    /**
                     * 判断参数 HouseId 是否已赋值
                     * @return HouseId 是否已赋值
                     * 
                     */
                    bool HouseIdHasBeenSet() const;

                    /**
                     * 获取Data source ID (discarded)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceConnectionId Data source ID (discarded)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionId() const;

                    /**
                     * 设置Data source ID (discarded)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceConnectionId Data source ID (discarded)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceConnectionId(const std::string& _datasourceConnectionId);

                    /**
                     * 判断参数 DatasourceConnectionId 是否已赋值
                     * @return DatasourceConnectionId 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionIdHasBeenSet() const;

                    /**
                     * 获取Network configuration status (0 - initializing; 1 - normal)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return State Network configuration status (0 - initializing; 1 - normal)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Network configuration status (0 - initializing; 1 - normal)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _state Network configuration status (0 - initializing; 1 - normal)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Create user Appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Appid Create user Appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置Create user Appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appid Create user Appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppid(const int64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取Computing engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HouseName Computing engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHouseName() const;

                    /**
                     * 设置Computing engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _houseName Computing engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHouseName(const std::string& _houseName);

                    /**
                     * 判断参数 HouseName 是否已赋值
                     * @return HouseName 是否已赋值
                     * 
                     */
                    bool HouseNameHasBeenSet() const;

                    /**
                     * 获取Network configuration name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceConnectionName Network configuration name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置Network configuration name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceConnectionName Network configuration name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取Network configuration type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkConnectionType Network configuration type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNetworkConnectionType() const;

                    /**
                     * 设置Network configuration type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkConnectionType Network configuration type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkConnectionType(const int64_t& _networkConnectionType);

                    /**
                     * 判断参数 NetworkConnectionType 是否已赋值
                     * @return NetworkConnectionType 是否已赋值
                     * 
                     */
                    bool NetworkConnectionTypeHasBeenSet() const;

                    /**
                     * 获取Create user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin Create user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Create user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin Create user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Create user SubAccountUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubAccountUin Create user SubAccountUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Create user SubAccountUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subAccountUin Create user SubAccountUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取Network configuration description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkConnectionDesc Network configuration description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetworkConnectionDesc() const;

                    /**
                     * 设置Network configuration description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkConnectionDesc Network configuration description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkConnectionDesc(const std::string& _networkConnectionDesc);

                    /**
                     * 判断参数 NetworkConnectionDesc 是否已赋值
                     * @return NetworkConnectionDesc 是否已赋值
                     * 
                     */
                    bool NetworkConnectionDescHasBeenSet() const;

                    /**
                     * 获取Data source vpcid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceConnectionVpcId Data source vpcid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionVpcId() const;

                    /**
                     * 设置Data source vpcid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceConnectionVpcId Data source vpcid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceConnectionVpcId(const std::string& _datasourceConnectionVpcId);

                    /**
                     * 判断参数 DatasourceConnectionVpcId 是否已赋值
                     * @return DatasourceConnectionVpcId 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionVpcIdHasBeenSet() const;

                    /**
                     * 获取Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceConnectionSubnetId Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionSubnetId() const;

                    /**
                     * 设置Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceConnectionSubnetId Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceConnectionSubnetId(const std::string& _datasourceConnectionSubnetId);

                    /**
                     * 判断参数 DatasourceConnectionSubnetId 是否已赋值
                     * @return DatasourceConnectionSubnetId 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionSubnetIdHasBeenSet() const;

                    /**
                     * 获取Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceConnectionCidrBlock Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionCidrBlock() const;

                    /**
                     * 设置Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceConnectionCidrBlock Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceConnectionCidrBlock(const std::string& _datasourceConnectionCidrBlock);

                    /**
                     * 判断参数 DatasourceConnectionCidrBlock 是否已赋值
                     * @return DatasourceConnectionCidrBlock 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionCidrBlockHasBeenSet() const;

                    /**
                     * 获取Data source SubnetCidrBlock
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceConnectionSubnetCidrBlock Data source SubnetCidrBlock
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionSubnetCidrBlock() const;

                    /**
                     * 设置Data source SubnetCidrBlock
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceConnectionSubnetCidrBlock Data source SubnetCidrBlock
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceConnectionSubnetCidrBlock(const std::string& _datasourceConnectionSubnetCidrBlock);

                    /**
                     * 判断参数 DatasourceConnectionSubnetCidrBlock 是否已赋值
                     * @return DatasourceConnectionSubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionSubnetCidrBlockHasBeenSet() const;

                private:

                    /**
                     * Network configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Unique identifier of network configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_associateId;
                    bool m_associateIdHasBeenSet;

                    /**
                     * Computing engine ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_houseId;
                    bool m_houseIdHasBeenSet;

                    /**
                     * Data source ID (discarded)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceConnectionId;
                    bool m_datasourceConnectionIdHasBeenSet;

                    /**
                     * Network configuration status (0 - initializing; 1 - normal)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Create user Appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * Computing engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_houseName;
                    bool m_houseNameHasBeenSet;

                    /**
                     * Network configuration name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * Network configuration type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_networkConnectionType;
                    bool m_networkConnectionTypeHasBeenSet;

                    /**
                     * Create user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Create user SubAccountUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * Network configuration description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkConnectionDesc;
                    bool m_networkConnectionDescHasBeenSet;

                    /**
                     * Data source vpcid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceConnectionVpcId;
                    bool m_datasourceConnectionVpcIdHasBeenSet;

                    /**
                     * Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceConnectionSubnetId;
                    bool m_datasourceConnectionSubnetIdHasBeenSet;

                    /**
                     * Data source SubnetId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceConnectionCidrBlock;
                    bool m_datasourceConnectionCidrBlockHasBeenSet;

                    /**
                     * Data source SubnetCidrBlock
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceConnectionSubnetCidrBlock;
                    bool m_datasourceConnectionSubnetCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_NETWORKCONNECTION_H_
