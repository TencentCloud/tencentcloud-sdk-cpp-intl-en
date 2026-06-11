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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICERULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Tencent Cloud observability platform notification channel group info
                */
                class MonitorNoticeRule : public AbstractModel
                {
                public:
                    MonitorNoticeRule();
                    ~MonitorNoticeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tencent Cloud observability platform notification template ID</p>
                     * @return NoticeId <p>Tencent Cloud observability platform notification template ID</p>
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置<p>Tencent Cloud observability platform notification template ID</p>
                     * @param _noticeId <p>Tencent Cloud observability platform notification template ID</p>
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the Tencent Cloud observability platform content template. The default content template is used when empty.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContentTmplId <p>ID of the Tencent Cloud observability platform content template. The default content template is used when empty.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContentTmplId() const;

                    /**
                     * 设置<p>ID of the Tencent Cloud observability platform content template. The default content template is used when empty.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _contentTmplId <p>ID of the Tencent Cloud observability platform content template. The default content template is used when empty.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContentTmplId(const std::string& _contentTmplId);

                    /**
                     * 判断参数 ContentTmplId 是否已赋值
                     * @return ContentTmplId 是否已赋值
                     * 
                     */
                    bool ContentTmplIdHasBeenSet() const;

                    /**
                     * 获取<p>Alarm level. 0: Warn; 1: Information; 2: Critical</p>
                     * @return AlarmLevels <p>Alarm level. 0: Warn; 1: Information; 2: Critical</p>
                     * 
                     */
                    std::vector<uint64_t> GetAlarmLevels() const;

                    /**
                     * 设置<p>Alarm level. 0: Warn; 1: Information; 2: Critical</p>
                     * @param _alarmLevels <p>Alarm level. 0: Warn; 1: Information; 2: Critical</p>
                     * 
                     */
                    void SetAlarmLevels(const std::vector<uint64_t>& _alarmLevels);

                    /**
                     * 判断参数 AlarmLevels 是否已赋值
                     * @return AlarmLevels 是否已赋值
                     * 
                     */
                    bool AlarmLevelsHasBeenSet() const;

                private:

                    /**
                     * <p>Tencent Cloud observability platform notification template ID</p>
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * <p>ID of the Tencent Cloud observability platform content template. The default content template is used when empty.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contentTmplId;
                    bool m_contentTmplIdHasBeenSet;

                    /**
                     * <p>Alarm level. 0: Warn; 1: Information; 2: Critical</p>
                     */
                    std::vector<uint64_t> m_alarmLevels;
                    bool m_alarmLevelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICERULE_H_
