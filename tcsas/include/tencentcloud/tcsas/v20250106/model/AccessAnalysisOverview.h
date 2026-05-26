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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_ACCESSANALYSISOVERVIEW_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_ACCESSANALYSISOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/AccessAnalysisDetail.h>
#include <tencentcloud/tcsas/v20250106/model/Overview.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Access analysis overview.
                */
                class AccessAnalysisOverview : public AbstractModel
                {
                public:
                    AccessAnalysisOverview();
                    ~AccessAnalysisOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access analysis overview data. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BaseData Access analysis overview data. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AccessAnalysisDetail GetBaseData() const;

                    /**
                     * 设置Access analysis overview data. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _baseData Access analysis overview data. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBaseData(const AccessAnalysisDetail& _baseData);

                    /**
                     * 判断参数 BaseData 是否已赋值
                     * @return BaseData 是否已赋值
                     * 
                     */
                    bool BaseDataHasBeenSet() const;

                    /**
                     * 获取Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Overview Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Overview GetOverview() const;

                    /**
                     * 设置Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _overview Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOverview(const Overview& _overview);

                    /**
                     * 判断参数 Overview 是否已赋值
                     * @return Overview 是否已赋值
                     * 
                     */
                    bool OverviewHasBeenSet() const;

                    /**
                     * 获取Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageData Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AccessAnalysisDetail GetPageData() const;

                    /**
                     * 设置Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageData Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageData(const AccessAnalysisDetail& _pageData);

                    /**
                     * 判断参数 PageData 是否已赋值
                     * @return PageData 是否已赋值
                     * 
                     */
                    bool PageDataHasBeenSet() const;

                    /**
                     * 获取Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Payment Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AccessAnalysisDetail GetPayment() const;

                    /**
                     * 设置Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payment Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayment(const AccessAnalysisDetail& _payment);

                    /**
                     * 判断参数 Payment 是否已赋值
                     * @return Payment 是否已赋值
                     * 
                     */
                    bool PaymentHasBeenSet() const;

                private:

                    /**
                     * Access analysis overview data. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AccessAnalysisDetail m_baseData;
                    bool m_baseDataHasBeenSet;

                    /**
                     * Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Overview m_overview;
                    bool m_overviewHasBeenSet;

                    /**
                     * Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AccessAnalysisDetail m_pageData;
                    bool m_pageDataHasBeenSet;

                    /**
                     * Not returned by this API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AccessAnalysisDetail m_payment;
                    bool m_paymentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_ACCESSANALYSISOVERVIEW_H_
