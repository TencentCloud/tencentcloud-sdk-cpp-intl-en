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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPVPCINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPVPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Source IP of the call public account information.
                */
                class SourceIPVpcInfo : public AbstractModel
                {
                public:
                    SourceIPVpcInfo();
                    ~SourceIPVpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account name
                     * @return Name Account name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Account name
                     * @param _name Account name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取App ID of the VPC.
                     * @return AppID App ID of the VPC.
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置App ID of the VPC.
                     * @param _appID App ID of the VPC.
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取vpc id
                     * @return VpcID vpc id
                     * 
                     */
                    std::string GetVpcID() const;

                    /**
                     * 设置vpc id
                     * @param _vpcID vpc id
                     * 
                     */
                    void SetVpcID(const std::string& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     * 
                     */
                    bool VpcIDHasBeenSet() const;

                    /**
                     * 获取vpc name.
                     * @return VpcName vpc name.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc name.
                     * @param _vpcName vpc name.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                private:

                    /**
                     * Account name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * App ID of the VPC.
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcID;
                    bool m_vpcIDHasBeenSet;

                    /**
                     * vpc name.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPVPCINFO_H_
