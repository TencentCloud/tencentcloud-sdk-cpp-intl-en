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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_FWCIDRINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_FWCIDRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/FwVpcCidr.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Firewall IP range information
                */
                class FwCidrInfo : public AbstractModel
                {
                public:
                    FwCidrInfo();
                    ~FwCidrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The IP range type of the firewall. Values: `VpcSelf` (VPC IP range preferred); `Assis` (Secondary IP range preferred); `Custom` (Custom IP range)
                     * @return FwCidrType The IP range type of the firewall. Values: `VpcSelf` (VPC IP range preferred); `Assis` (Secondary IP range preferred); `Custom` (Custom IP range)
                     */
                    std::string GetFwCidrType() const;

                    /**
                     * 设置The IP range type of the firewall. Values: `VpcSelf` (VPC IP range preferred); `Assis` (Secondary IP range preferred); `Custom` (Custom IP range)
                     * @param FwCidrType The IP range type of the firewall. Values: `VpcSelf` (VPC IP range preferred); `Assis` (Secondary IP range preferred); `Custom` (Custom IP range)
                     */
                    void SetFwCidrType(const std::string& _fwCidrType);

                    /**
                     * 判断参数 FwCidrType 是否已赋值
                     * @return FwCidrType 是否已赋值
                     */
                    bool FwCidrTypeHasBeenSet() const;

                    /**
                     * 获取The IP segment assigned for each VPC.
                     * @return FwCidrLst The IP segment assigned for each VPC.
                     */
                    std::vector<FwVpcCidr> GetFwCidrLst() const;

                    /**
                     * 设置The IP segment assigned for each VPC.
                     * @param FwCidrLst The IP segment assigned for each VPC.
                     */
                    void SetFwCidrLst(const std::vector<FwVpcCidr>& _fwCidrLst);

                    /**
                     * 判断参数 FwCidrLst 是否已赋值
                     * @return FwCidrLst 是否已赋值
                     */
                    bool FwCidrLstHasBeenSet() const;

                    /**
                     * 获取The IP segment used by other firewalls. Specify this if you want to assign a dedicated segment for the firewall.
                     * @return ComFwCidr The IP segment used by other firewalls. Specify this if you want to assign a dedicated segment for the firewall.
                     */
                    std::string GetComFwCidr() const;

                    /**
                     * 设置The IP segment used by other firewalls. Specify this if you want to assign a dedicated segment for the firewall.
                     * @param ComFwCidr The IP segment used by other firewalls. Specify this if you want to assign a dedicated segment for the firewall.
                     */
                    void SetComFwCidr(const std::string& _comFwCidr);

                    /**
                     * 判断参数 ComFwCidr 是否已赋值
                     * @return ComFwCidr 是否已赋值
                     */
                    bool ComFwCidrHasBeenSet() const;

                private:

                    /**
                     * The IP range type of the firewall. Values: `VpcSelf` (VPC IP range preferred); `Assis` (Secondary IP range preferred); `Custom` (Custom IP range)
                     */
                    std::string m_fwCidrType;
                    bool m_fwCidrTypeHasBeenSet;

                    /**
                     * The IP segment assigned for each VPC.
                     */
                    std::vector<FwVpcCidr> m_fwCidrLst;
                    bool m_fwCidrLstHasBeenSet;

                    /**
                     * The IP segment used by other firewalls. Specify this if you want to assign a dedicated segment for the firewall.
                     */
                    std::string m_comFwCidr;
                    bool m_comFwCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_FWCIDRINFO_H_
