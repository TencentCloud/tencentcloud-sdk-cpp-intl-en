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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCQUOTAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcModelQuota.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcQuota request structure.
                */
                class CreateAigcQuotaRequest : public AbstractModel
                {
                public:
                    CreateAigcQuotaRequest();
                    ~CreateAigcQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</strong></p>
                     * @return SubAppId <p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</strong></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</strong></p>
                     * @param _subAppId <p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</strong></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image task</li><li>Video: AIGC video task</li><li>Text: AIGC text task</li></ul>
                     * @return QuotaType <p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image task</li><li>Video: AIGC video task</li><li>Text: AIGC text task</li></ul>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image task</li><li>Video: AIGC video task</li><li>Text: AIGC text task</li></ul>
                     * @param _quotaType <p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image task</li><li>Video: AIGC video task</li><li>Text: AIGC text task</li></ul>
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of quotas for the task.</p><p>Unit: images/second/tokens.</p><ul><li>When QuotaType is Image, the unit is images;</li><li>When QuotaType is Video, the unit is seconds;</li><li>When QuotaType is Text, the unit is tokens.</li></ul>
                     * @return QuotaLimit <p>Number of quotas for the task.</p><p>Unit: images/second/tokens.</p><ul><li>When QuotaType is Image, the unit is images;</li><li>When QuotaType is Video, the unit is seconds;</li><li>When QuotaType is Text, the unit is tokens.</li></ul>
                     * 
                     */
                    uint64_t GetQuotaLimit() const;

                    /**
                     * 设置<p>Number of quotas for the task.</p><p>Unit: images/second/tokens.</p><ul><li>When QuotaType is Image, the unit is images;</li><li>When QuotaType is Video, the unit is seconds;</li><li>When QuotaType is Text, the unit is tokens.</li></ul>
                     * @param _quotaLimit <p>Number of quotas for the task.</p><p>Unit: images/second/tokens.</p><ul><li>When QuotaType is Image, the unit is images;</li><li>When QuotaType is Video, the unit is seconds;</li><li>When QuotaType is Text, the unit is tokens.</li></ul>
                     * 
                     */
                    void SetQuotaLimit(const uint64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                    /**
                     * 获取<p>Valid only when QuotaType=Text, used to select the ApiToken that requires quota limit</p>
                     * @return ApiToken <p>Valid only when QuotaType=Text, used to select the ApiToken that requires quota limit</p>
                     * 
                     */
                    std::string GetApiToken() const;

                    /**
                     * 设置<p>Valid only when QuotaType=Text, used to select the ApiToken that requires quota limit</p>
                     * @param _apiToken <p>Valid only when QuotaType=Text, used to select the ApiToken that requires quota limit</p>
                     * 
                     */
                    void SetApiToken(const std::string& _apiToken);

                    /**
                     * 判断参数 ApiToken 是否已赋值
                     * @return ApiToken 是否已赋值
                     * 
                     */
                    bool ApiTokenHasBeenSet() const;

                    /**
                     * 获取<p>Quota reset cycle.</p><p>Enumeration values:</p><ul><li>Day: Reset every day.</li><li>Month: Reset on a specified date each month.</li><li>Total: Never reset. The QuotaLimit parameter is the total quota.</li></ul>
                     * @return QuotaPeriod <p>Quota reset cycle.</p><p>Enumeration values:</p><ul><li>Day: Reset every day.</li><li>Month: Reset on a specified date each month.</li><li>Total: Never reset. The QuotaLimit parameter is the total quota.</li></ul>
                     * 
                     */
                    std::string GetQuotaPeriod() const;

                    /**
                     * 设置<p>Quota reset cycle.</p><p>Enumeration values:</p><ul><li>Day: Reset every day.</li><li>Month: Reset on a specified date each month.</li><li>Total: Never reset. The QuotaLimit parameter is the total quota.</li></ul>
                     * @param _quotaPeriod <p>Quota reset cycle.</p><p>Enumeration values:</p><ul><li>Day: Reset every day.</li><li>Month: Reset on a specified date each month.</li><li>Total: Never reset. The QuotaLimit parameter is the total quota.</li></ul>
                     * 
                     */
                    void SetQuotaPeriod(const std::string& _quotaPeriod);

                    /**
                     * 判断参数 QuotaPeriod 是否已赋值
                     * @return QuotaPeriod 是否已赋值
                     * 
                     */
                    bool QuotaPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Reset date of the per month quota. Valid only when QuotaPeriod=Month.</p><p>If the selected date does not exist in the current month, the reset is postponed to 00:00 on the 1st of the next month.</p>
                     * @return ResetDay <p>Reset date of the per month quota. Valid only when QuotaPeriod=Month.</p><p>If the selected date does not exist in the current month, the reset is postponed to 00:00 on the 1st of the next month.</p>
                     * 
                     */
                    uint64_t GetResetDay() const;

                    /**
                     * 设置<p>Reset date of the per month quota. Valid only when QuotaPeriod=Month.</p><p>If the selected date does not exist in the current month, the reset is postponed to 00:00 on the 1st of the next month.</p>
                     * @param _resetDay <p>Reset date of the per month quota. Valid only when QuotaPeriod=Month.</p><p>If the selected date does not exist in the current month, the reset is postponed to 00:00 on the 1st of the next month.</p>
                     * 
                     */
                    void SetResetDay(const uint64_t& _resetDay);

                    /**
                     * 判断参数 ResetDay 是否已赋值
                     * @return ResetDay 是否已赋值
                     * 
                     */
                    bool ResetDayHasBeenSet() const;

                    /**
                     * 获取<p>Whether to set specified quotas for each model</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * @return ModelQuotaSwitch <p>Whether to set specified quotas for each model</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * 
                     */
                    std::string GetModelQuotaSwitch() const;

                    /**
                     * 设置<p>Whether to set specified quotas for each model</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * @param _modelQuotaSwitch <p>Whether to set specified quotas for each model</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * 
                     */
                    void SetModelQuotaSwitch(const std::string& _modelQuotaSwitch);

                    /**
                     * 判断参数 ModelQuotaSwitch 是否已赋值
                     * @return ModelQuotaSwitch 是否已赋值
                     * 
                     */
                    bool ModelQuotaSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Quota set for each model, valid only when ModelQuotaSwitch=ON.</p>
                     * @return ModelQuotas <p>Quota set for each model, valid only when ModelQuotaSwitch=ON.</p>
                     * 
                     */
                    std::vector<AigcModelQuota> GetModelQuotas() const;

                    /**
                     * 设置<p>Quota set for each model, valid only when ModelQuotaSwitch=ON.</p>
                     * @param _modelQuotas <p>Quota set for each model, valid only when ModelQuotaSwitch=ON.</p>
                     * 
                     */
                    void SetModelQuotas(const std::vector<AigcModelQuota>& _modelQuotas);

                    /**
                     * 判断参数 ModelQuotas 是否已赋值
                     * @return ModelQuotas 是否已赋值
                     * 
                     */
                    bool ModelQuotasHasBeenSet() const;

                private:

                    /**
                     * <p><strong>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field with the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</strong></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Quota type</p><p>Enumeration values:</p><ul><li>Image: AIGC image task</li><li>Video: AIGC video task</li><li>Text: AIGC text task</li></ul>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>Number of quotas for the task.</p><p>Unit: images/second/tokens.</p><ul><li>When QuotaType is Image, the unit is images;</li><li>When QuotaType is Video, the unit is seconds;</li><li>When QuotaType is Text, the unit is tokens.</li></ul>
                     */
                    uint64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                    /**
                     * <p>Valid only when QuotaType=Text, used to select the ApiToken that requires quota limit</p>
                     */
                    std::string m_apiToken;
                    bool m_apiTokenHasBeenSet;

                    /**
                     * <p>Quota reset cycle.</p><p>Enumeration values:</p><ul><li>Day: Reset every day.</li><li>Month: Reset on a specified date each month.</li><li>Total: Never reset. The QuotaLimit parameter is the total quota.</li></ul>
                     */
                    std::string m_quotaPeriod;
                    bool m_quotaPeriodHasBeenSet;

                    /**
                     * <p>Reset date of the per month quota. Valid only when QuotaPeriod=Month.</p><p>If the selected date does not exist in the current month, the reset is postponed to 00:00 on the 1st of the next month.</p>
                     */
                    uint64_t m_resetDay;
                    bool m_resetDayHasBeenSet;

                    /**
                     * <p>Whether to set specified quotas for each model</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     */
                    std::string m_modelQuotaSwitch;
                    bool m_modelQuotaSwitchHasBeenSet;

                    /**
                     * <p>Quota set for each model, valid only when ModelQuotaSwitch=ON.</p>
                     */
                    std::vector<AigcModelQuota> m_modelQuotas;
                    bool m_modelQuotasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCQUOTAREQUEST_H_
