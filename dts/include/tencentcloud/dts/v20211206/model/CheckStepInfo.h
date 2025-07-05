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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEPINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/ProcessProgress.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Check task running details
                */
                class CheckStepInfo : public AbstractModel
                {
                public:
                    CheckStepInfo();
                    ~CheckStepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartAt Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startAt Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndAt Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endAt Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     * 
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取Task step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Progress Task step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ProcessProgress GetProgress() const;

                    /**
                     * 设置Task step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _progress Task step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProgress(const ProcessProgress& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * Task step information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ProcessProgress m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEPINFO_H_
