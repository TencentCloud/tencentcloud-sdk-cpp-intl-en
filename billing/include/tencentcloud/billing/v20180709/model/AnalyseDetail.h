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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AnalyseTimeDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Cost analysis data complex type
                */
                class AnalyseDetail : public AbstractModel
                {
                public:
                    AnalyseDetail();
                    ~AnalyseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time
                     * @return Name Time
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Time
                     * @param _name Time
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
                     * 获取Amount
                     * @return Total Amount
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Amount
                     * @param _total Amount
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Date detailed amountNote: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeDetail Date detailed amountNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalyseTimeDetail> GetTimeDetail() const;

                    /**
                     * 设置Date detailed amountNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeDetail Date detailed amountNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeDetail(const std::vector<AnalyseTimeDetail>& _timeDetail);

                    /**
                     * 判断参数 TimeDetail 是否已赋值
                     * @return TimeDetail 是否已赋值
                     * 
                     */
                    bool TimeDetailHasBeenSet() const;

                private:

                    /**
                     * Time
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Amount
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Date detailed amountNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalyseTimeDetail> m_timeDetail;
                    bool m_timeDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEDETAIL_H_
