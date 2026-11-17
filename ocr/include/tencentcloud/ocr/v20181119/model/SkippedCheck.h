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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SKIPPEDCHECK_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SKIPPEDCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Skipped check items
                */
                class SkippedCheck : public AbstractModel
                {
                public:
                    SkippedCheck();
                    ~SkippedCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Detection item name</p>
                     * @return Check <p>Detection item name</p>
                     * 
                     */
                    std::string GetCheck() const;

                    /**
                     * 设置<p>Detection item name</p>
                     * @param _check <p>Detection item name</p>
                     * 
                     */
                    void SetCheck(const std::string& _check);

                    /**
                     * 判断参数 Check 是否已赋值
                     * @return Check 是否已赋值
                     * 
                     */
                    bool CheckHasBeenSet() const;

                    /**
                     * 获取<p>Skip reason: NotSupported (this card type does not support this detection item) / NotApplicable (prerequisite not met, for example, consistency check requires a back image)</p>
                     * @return Reason <p>Skip reason: NotSupported (this card type does not support this detection item) / NotApplicable (prerequisite not met, for example, consistency check requires a back image)</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>Skip reason: NotSupported (this card type does not support this detection item) / NotApplicable (prerequisite not met, for example, consistency check requires a back image)</p>
                     * @param _reason <p>Skip reason: NotSupported (this card type does not support this detection item) / NotApplicable (prerequisite not met, for example, consistency check requires a back image)</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>Detection item name</p>
                     */
                    std::string m_check;
                    bool m_checkHasBeenSet;

                    /**
                     * <p>Skip reason: NotSupported (this card type does not support this detection item) / NotApplicable (prerequisite not met, for example, consistency check requires a back image)</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SKIPPEDCHECK_H_
