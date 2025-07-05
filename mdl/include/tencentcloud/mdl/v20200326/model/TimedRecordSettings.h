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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDRECORDSETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDRECORDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Timed recording settings
                */
                class TimedRecordSettings : public AbstractModel
                {
                public:
                    TimedRecordSettings();
                    ~TimedRecordSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to automatically delete finished recording events. Valid values: `CLOSE`, `OPEN`. If this parameter is left empty, `CLOSE` will be used.
If it is set to `OPEN`, a recording event will be deleted 7 days after it is finished.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AutoClear Whether to automatically delete finished recording events. Valid values: `CLOSE`, `OPEN`. If this parameter is left empty, `CLOSE` will be used.
If it is set to `OPEN`, a recording event will be deleted 7 days after it is finished.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAutoClear() const;

                    /**
                     * 设置Whether to automatically delete finished recording events. Valid values: `CLOSE`, `OPEN`. If this parameter is left empty, `CLOSE` will be used.
If it is set to `OPEN`, a recording event will be deleted 7 days after it is finished.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _autoClear Whether to automatically delete finished recording events. Valid values: `CLOSE`, `OPEN`. If this parameter is left empty, `CLOSE` will be used.
If it is set to `OPEN`, a recording event will be deleted 7 days after it is finished.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetAutoClear(const std::string& _autoClear);

                    /**
                     * 判断参数 AutoClear 是否已赋值
                     * @return AutoClear 是否已赋值
                     * 
                     */
                    bool AutoClearHasBeenSet() const;

                private:

                    /**
                     * Whether to automatically delete finished recording events. Valid values: `CLOSE`, `OPEN`. If this parameter is left empty, `CLOSE` will be used.
If it is set to `OPEN`, a recording event will be deleted 7 days after it is finished.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_autoClear;
                    bool m_autoClearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDRECORDSETTINGS_H_
