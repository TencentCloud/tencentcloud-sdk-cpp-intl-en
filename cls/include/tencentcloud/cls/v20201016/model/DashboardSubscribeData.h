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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEDATA_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DashboardNoticeMode.h>
#include <tencentcloud/cls/v20201016/model/DashboardTemplateVariable.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Dashboard subscription data
                */
                class DashboardSubscribeData : public AbstractModel
                {
                public:
                    DashboardSubscribeData();
                    ~DashboardSubscribeData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dashboard subscription notification method.
                     * @return NoticeModes Dashboard subscription notification method.
                     * 
                     */
                    std::vector<DashboardNoticeMode> GetNoticeModes() const;

                    /**
                     * 设置Dashboard subscription notification method.
                     * @param _noticeModes Dashboard subscription notification method.
                     * 
                     */
                    void SetNoticeModes(const std::vector<DashboardNoticeMode>& _noticeModes);

                    /**
                     * 判断参数 NoticeModes 是否已赋值
                     * @return NoticeModes 是否已赋值
                     * 
                     */
                    bool NoticeModesHasBeenSet() const;

                    /**
                     * 获取Dashboard subscription time. If this field is empty, the dashboard default time is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DashboardTime Dashboard subscription time. If this field is empty, the dashboard default time is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDashboardTime() const;

                    /**
                     * 设置Dashboard subscription time. If this field is empty, the dashboard default time is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dashboardTime Dashboard subscription time. If this field is empty, the dashboard default time is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDashboardTime(const std::vector<std::string>& _dashboardTime);

                    /**
                     * 判断参数 DashboardTime 是否已赋值
                     * @return DashboardTime 是否已赋值
                     * 
                     */
                    bool DashboardTimeHasBeenSet() const;

                    /**
                     * 获取Dashboard subscription template variable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateVariables Dashboard subscription template variable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DashboardTemplateVariable> GetTemplateVariables() const;

                    /**
                     * 设置Dashboard subscription template variable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateVariables Dashboard subscription template variable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateVariables(const std::vector<DashboardTemplateVariable>& _templateVariables);

                    /**
                     * 判断参数 TemplateVariables 是否已赋值
                     * @return TemplateVariables 是否已赋值
                     * 
                     */
                    bool TemplateVariablesHasBeenSet() const;

                    /**
                     * 获取Time zone. Refer to: https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI.
                     * @return Timezone Time zone. Refer to: https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI.
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置Time zone. Refer to: https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI.
                     * @param _timezone Time zone. Refer to: https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI.
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                    /**
                     * 获取Language. zh: Chinese; en: English.
                     * @return SubscribeLanguage Language. zh: Chinese; en: English.
                     * 
                     */
                    std::string GetSubscribeLanguage() const;

                    /**
                     * 设置Language. zh: Chinese; en: English.
                     * @param _subscribeLanguage Language. zh: Chinese; en: English.
                     * 
                     */
                    void SetSubscribeLanguage(const std::string& _subscribeLanguage);

                    /**
                     * 判断参数 SubscribeLanguage 是否已赋值
                     * @return SubscribeLanguage 是否已赋值
                     * 
                     */
                    bool SubscribeLanguageHasBeenSet() const;

                    /**
                     * 获取Call link domain name. It must start with http:// or https:// and must not end with /.
                     * @return JumpDomain Call link domain name. It must start with http:// or https:// and must not end with /.
                     * 
                     */
                    std::string GetJumpDomain() const;

                    /**
                     * 设置Call link domain name. It must start with http:// or https:// and must not end with /.
                     * @param _jumpDomain Call link domain name. It must start with http:// or https:// and must not end with /.
                     * 
                     */
                    void SetJumpDomain(const std::string& _jumpDomain);

                    /**
                     * 判断参数 JumpDomain 是否已赋值
                     * @return JumpDomain 是否已赋值
                     * 
                     */
                    bool JumpDomainHasBeenSet() const;

                    /**
                     * 获取Custom redirection link.
                     * @return JumpUrl Custom redirection link.
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置Custom redirection link.
                     * @param _jumpUrl Custom redirection link.
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                private:

                    /**
                     * Dashboard subscription notification method.
                     */
                    std::vector<DashboardNoticeMode> m_noticeModes;
                    bool m_noticeModesHasBeenSet;

                    /**
                     * Dashboard subscription time. If this field is empty, the dashboard default time is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dashboardTime;
                    bool m_dashboardTimeHasBeenSet;

                    /**
                     * Dashboard subscription template variable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DashboardTemplateVariable> m_templateVariables;
                    bool m_templateVariablesHasBeenSet;

                    /**
                     * Time zone. Refer to: https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI.
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * Language. zh: Chinese; en: English.
                     */
                    std::string m_subscribeLanguage;
                    bool m_subscribeLanguageHasBeenSet;

                    /**
                     * Call link domain name. It must start with http:// or https:// and must not end with /.
                     */
                    std::string m_jumpDomain;
                    bool m_jumpDomainHasBeenSet;

                    /**
                     * Custom redirection link.
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEDATA_H_
