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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MonitorNoticeRule.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Offer multiple Notice messages
                */
                class MonitorNotice : public AbstractModel
                {
                public:
                    MonitorNotice();
                    ~MonitorNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MonitorNoticeRule in array format
                     * @return Notices MonitorNoticeRule in array format
                     * 
                     */
                    std::vector<MonitorNoticeRule> GetNotices() const;

                    /**
                     * 设置MonitorNoticeRule in array format
                     * @param _notices MonitorNoticeRule in array format
                     * 
                     */
                    void SetNotices(const std::vector<MonitorNoticeRule>& _notices);

                    /**
                     * 判断参数 Notices 是否已赋值
                     * @return Notices 是否已赋值
                     * 
                     */
                    bool NoticesHasBeenSet() const;

                private:

                    /**
                     * MonitorNoticeRule in array format
                     */
                    std::vector<MonitorNoticeRule> m_notices;
                    bool m_noticesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICE_H_
