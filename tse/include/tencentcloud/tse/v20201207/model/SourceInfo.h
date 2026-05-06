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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/SourceInstanceVpcInfo.h>
#include <tencentcloud/tse/v20201207/model/SourceInstanceAuth.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * service source
                */
                class SourceInfo : public AbstractModel
                {
                public:
                    SourceInfo();
                    ~SourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Microservice engine integration IP address information
                     * @return Addresses Microservice engine integration IP address information
                     * 
                     */
                    std::vector<std::string> GetAddresses() const;

                    /**
                     * 设置Microservice engine integration IP address information
                     * @param _addresses Microservice engine integration IP address information
                     * 
                     */
                    void SetAddresses(const std::vector<std::string>& _addresses);

                    /**
                     * 判断参数 Addresses 是否已赋值
                     * @return Addresses 是否已赋值
                     * 
                     */
                    bool AddressesHasBeenSet() const;

                    /**
                     * 获取VPC information of the microservice engine
                     * @return VpcInfo VPC information of the microservice engine
                     * 
                     */
                    SourceInstanceVpcInfo GetVpcInfo() const;

                    /**
                     * 设置VPC information of the microservice engine
                     * @param _vpcInfo VPC information of the microservice engine
                     * 
                     */
                    void SetVpcInfo(const SourceInstanceVpcInfo& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取Microservice engine authentication information
                     * @return Auth Microservice engine authentication information
                     * 
                     */
                    SourceInstanceAuth GetAuth() const;

                    /**
                     * 设置Microservice engine authentication information
                     * @param _auth Microservice engine authentication information
                     * 
                     */
                    void SetAuth(const SourceInstanceAuth& _auth);

                    /**
                     * 判断参数 Auth 是否已赋值
                     * @return Auth 是否已赋值
                     * 
                     */
                    bool AuthHasBeenSet() const;

                private:

                    /**
                     * Microservice engine integration IP address information
                     */
                    std::vector<std::string> m_addresses;
                    bool m_addressesHasBeenSet;

                    /**
                     * VPC information of the microservice engine
                     */
                    SourceInstanceVpcInfo m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * Microservice engine authentication information
                     */
                    SourceInstanceAuth m_auth;
                    bool m_authHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINFO_H_
