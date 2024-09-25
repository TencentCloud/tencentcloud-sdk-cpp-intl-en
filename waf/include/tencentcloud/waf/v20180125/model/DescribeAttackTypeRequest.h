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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKTYPEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAttackType request structure.
                */
                class DescribeAttackTypeRequest : public AbstractModel
                {
                public:
                    DescribeAttackTypeRequest();
                    ~DescribeAttackTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return FromTime Start time
                     * 
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置Start time
                     * @param _fromTime Start time
                     * 
                     */
                    void SetFromTime(const std::string& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return ToTime End time
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置End time
                     * @param _toTime End time
                     * 
                     */
                    void SetToTime(const std::string& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                    /**
                     * 获取Compatible host, gradually phasing out Host field
                     * @return Host Compatible host, gradually phasing out Host field
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Compatible host, gradually phasing out Host field
                     * @param _host Compatible host, gradually phasing out Host field
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     * @return Edition Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     * @param _edition Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取WAF instance ID. No filter will be carried out if it is not input.
                     * @return InstanceID WAF instance ID. No filter will be carried out if it is not input.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置WAF instance ID. No filter will be carried out if it is not input.
                     * @param _instanceID WAF instance ID. No filter will be carried out if it is not input.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     * @return Domain Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     * @param _domain Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * Compatible host, gradually phasing out Host field
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * WAF instance ID. No filter will be carried out if it is not input.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKTYPEREQUEST_H_
