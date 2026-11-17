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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILREQUEST_H_

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
                * DescribeLLMHourBillDetail request structure.
                */
                class DescribeLLMHourBillDetailRequest : public AbstractModel
                {
                public:
                    DescribeLLMHourBillDetailRequest();
                    ~DescribeLLMHourBillDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
Parameter format: waf_xxxxxxxx
                     * @return InstanceId Instance ID
Parameter format: waf_xxxxxxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Parameter format: waf_xxxxxxxx
                     * @param _instanceId Instance ID
Parameter format: waf_xxxxxxxx
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Query date. Only a single day is supported.
Parameter format: YYYY-MM-DD or YYYYMMDD
                     * @return Date Query date. Only a single day is supported.
Parameter format: YYYY-MM-DD or YYYYMMDD
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Query date. Only a single day is supported.
Parameter format: YYYY-MM-DD or YYYYMMDD
                     * @param _date Query date. Only a single day is supported.
Parameter format: YYYY-MM-DD or YYYYMMDD
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * Instance ID
Parameter format: waf_xxxxxxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Query date. Only a single day is supported.
Parameter format: YYYY-MM-DD or YYYYMMDD
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILREQUEST_H_
