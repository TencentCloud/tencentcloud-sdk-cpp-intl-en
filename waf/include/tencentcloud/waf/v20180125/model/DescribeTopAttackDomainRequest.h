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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINREQUEST_H_

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
                * DescribeTopAttackDomain request structure.
                */
                class DescribeTopAttackDomainRequest : public AbstractModel
                {
                public:
                    DescribeTopAttackDomainRequest();
                    ~DescribeTopAttackDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start time
                     * @return FromTime Query start time
                     * 
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置Query start time
                     * @param _fromTime Query start time
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
                     * 获取Query end time
                     * @return ToTime Query end time
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置Query end time
                     * @param _toTime Query end time
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
                     * 获取Top N, selectable from 0-10. The default is 10.
                     * @return Count Top N, selectable from 0-10. The default is 10.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Top N, selectable from 0-10. The default is 10.
                     * @param _count Top N, selectable from 0-10. The default is 10.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

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

                private:

                    /**
                     * Query start time
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * Query end time
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * Top N, selectable from 0-10. The default is 10.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINREQUEST_H_
