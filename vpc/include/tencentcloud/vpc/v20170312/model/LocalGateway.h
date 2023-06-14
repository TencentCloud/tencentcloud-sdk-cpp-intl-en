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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_LOCALGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_LOCALGATEWAY_H_

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
                * Local gateway information
                */
                class LocalGateway : public AbstractModel
                {
                public:
                    LocalGateway();
                    ~LocalGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDC instance ID
                     * @return CdcId CDC instance ID
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC instance ID
                     * @param _cdcId CDC instance ID
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取VPC instance ID
                     * @return VpcId VPC instance ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID
                     * @param _vpcId VPC instance ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Local gateway instance ID
                     * @return UniqLocalGwId Local gateway instance ID
                     * 
                     */
                    std::string GetUniqLocalGwId() const;

                    /**
                     * 设置Local gateway instance ID
                     * @param _uniqLocalGwId Local gateway instance ID
                     * 
                     */
                    void SetUniqLocalGwId(const std::string& _uniqLocalGwId);

                    /**
                     * 判断参数 UniqLocalGwId 是否已赋值
                     * @return UniqLocalGwId 是否已赋值
                     * 
                     */
                    bool UniqLocalGwIdHasBeenSet() const;

                    /**
                     * 获取Local gateway name
                     * @return LocalGatewayName Local gateway name
                     * 
                     */
                    std::string GetLocalGatewayName() const;

                    /**
                     * 设置Local gateway name
                     * @param _localGatewayName Local gateway name
                     * 
                     */
                    void SetLocalGatewayName(const std::string& _localGatewayName);

                    /**
                     * 判断参数 LocalGatewayName 是否已赋值
                     * @return LocalGatewayName 是否已赋值
                     * 
                     */
                    bool LocalGatewayNameHasBeenSet() const;

                    /**
                     * 获取Local gateway IP
                     * @return LocalGwIp Local gateway IP
                     * 
                     */
                    std::string GetLocalGwIp() const;

                    /**
                     * 设置Local gateway IP
                     * @param _localGwIp Local gateway IP
                     * 
                     */
                    void SetLocalGwIp(const std::string& _localGwIp);

                    /**
                     * 判断参数 LocalGwIp 是否已赋值
                     * @return LocalGwIp 是否已赋值
                     * 
                     */
                    bool LocalGwIpHasBeenSet() const;

                    /**
                     * 获取Creation time of the local gateway
                     * @return CreateTime Creation time of the local gateway
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the local gateway
                     * @param _createTime Creation time of the local gateway
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * CDC instance ID
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * VPC instance ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Local gateway instance ID
                     */
                    std::string m_uniqLocalGwId;
                    bool m_uniqLocalGwIdHasBeenSet;

                    /**
                     * Local gateway name
                     */
                    std::string m_localGatewayName;
                    bool m_localGatewayNameHasBeenSet;

                    /**
                     * Local gateway IP
                     */
                    std::string m_localGwIp;
                    bool m_localGwIpHasBeenSet;

                    /**
                     * Creation time of the local gateway
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_LOCALGATEWAY_H_
