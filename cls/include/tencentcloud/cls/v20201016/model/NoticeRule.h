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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Notification rules
                */
                class NoticeRule : public AbstractModel
                {
                public:
                    NoticeRule();
                    ~NoticeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarms notification template recipient informationNote: This field may return null, indicating that no valid values can be obtained.
                     * @return NoticeReceivers Alarms notification template recipient informationNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置Alarms notification template recipient informationNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _noticeReceivers Alarms notification template recipient informationNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     * 
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取Alarms notification template callback informationNote: This field may return null, indicating that no valid values can be obtained.
                     * @return WebCallbacks Alarms notification template callback informationNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置Alarms notification template callback informationNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _webCallbacks Alarms notification template callback informationNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     * 
                     */
                    bool WebCallbacksHasBeenSet() const;

                    /**
                     * 获取Matching rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rule Matching rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Matching rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rule Matching rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * Alarms notification template recipient informationNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * Alarms notification template callback informationNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * Matching rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_
