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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSSOURCEIPINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSSOURCEIPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosInvokeIpVpcInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Source ip information of COS calls
                */
                class CosSourceIpInfo : public AbstractModel
                {
                public:
                    CosSourceIpInfo();
                    ~CosSourceIpInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UA call
                     * @return UA UA call
                     * 
                     */
                    std::vector<std::string> GetUA() const;

                    /**
                     * 设置UA call
                     * @param _uA UA call
                     * 
                     */
                    void SetUA(const std::vector<std::string>& _uA);

                    /**
                     * 判断参数 UA 是否已赋值
                     * @return UA 是否已赋值
                     * 
                     */
                    bool UAHasBeenSet() const;

                    /**
                     * 获取API call for vpc information
                     * @return VpcInfo API call for vpc information
                     * 
                     */
                    CosInvokeIpVpcInfo GetVpcInfo() const;

                    /**
                     * 设置API call for vpc information
                     * @param _vpcInfo API call for vpc information
                     * 
                     */
                    void SetVpcInfo(const CosInvokeIpVpcInfo& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                private:

                    /**
                     * UA call
                     */
                    std::vector<std::string> m_uA;
                    bool m_uAHasBeenSet;

                    /**
                     * API call for vpc information
                     */
                    CosInvokeIpVpcInfo m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSSOURCEIPINFO_H_
