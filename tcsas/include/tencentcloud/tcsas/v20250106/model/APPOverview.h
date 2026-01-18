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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_APPOVERVIEW_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_APPOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/APPOverviewData.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Superapp data overview
                */
                class APPOverview : public AbstractModel
                {
                public:
                    APPOverview();
                    ~APPOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BaseData No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    APPOverviewData GetBaseData() const;

                    /**
                     * 设置No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _baseData No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBaseData(const APPOverviewData& _baseData);

                    /**
                     * 判断参数 BaseData 是否已赋值
                     * @return BaseData 是否已赋值
                     * 
                     */
                    bool BaseDataHasBeenSet() const;

                    /**
                     * 获取Superapp overview summary data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Overview Superapp overview summary data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    APPOverviewData GetOverview() const;

                    /**
                     * 设置Superapp overview summary data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _overview Superapp overview summary data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOverview(const APPOverviewData& _overview);

                    /**
                     * 判断参数 Overview 是否已赋值
                     * @return Overview 是否已赋值
                     * 
                     */
                    bool OverviewHasBeenSet() const;

                    /**
                     * 获取No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageData No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    APPOverviewData GetPageData() const;

                    /**
                     * 设置No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageData No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageData(const APPOverviewData& _pageData);

                    /**
                     * 判断参数 PageData 是否已赋值
                     * @return PageData 是否已赋值
                     * 
                     */
                    bool PageDataHasBeenSet() const;

                    /**
                     * 获取No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Payment No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    APPOverviewData GetPayment() const;

                    /**
                     * 设置No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payment No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayment(const APPOverviewData& _payment);

                    /**
                     * 判断参数 Payment 是否已赋值
                     * @return Payment 是否已赋值
                     * 
                     */
                    bool PaymentHasBeenSet() const;

                private:

                    /**
                     * No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    APPOverviewData m_baseData;
                    bool m_baseDataHasBeenSet;

                    /**
                     * Superapp overview summary data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    APPOverviewData m_overview;
                    bool m_overviewHasBeenSet;

                    /**
                     * No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    APPOverviewData m_pageData;
                    bool m_pageDataHasBeenSet;

                    /**
                     * No data available
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    APPOverviewData m_payment;
                    bool m_paymentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_APPOVERVIEW_H_
