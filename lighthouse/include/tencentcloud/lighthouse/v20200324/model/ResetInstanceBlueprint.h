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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEBLUEPRINT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEBLUEPRINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Blueprint.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Image reset information
                */
                class ResetInstanceBlueprint : public AbstractModel
                {
                public:
                    ResetInstanceBlueprint();
                    ~ResetInstanceBlueprint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image details
                     * @return BlueprintInfo Image details
                     * 
                     */
                    Blueprint GetBlueprintInfo() const;

                    /**
                     * 设置Image details
                     * @param _blueprintInfo Image details
                     * 
                     */
                    void SetBlueprintInfo(const Blueprint& _blueprintInfo);

                    /**
                     * 判断参数 BlueprintInfo 是否已赋值
                     * @return BlueprintInfo 是否已赋值
                     * 
                     */
                    bool BlueprintInfoHasBeenSet() const;

                    /**
                     * 获取Whether the image can be reset as the target image
                     * @return IsResettable Whether the image can be reset as the target image
                     * 
                     */
                    bool GetIsResettable() const;

                    /**
                     * 设置Whether the image can be reset as the target image
                     * @param _isResettable Whether the image can be reset as the target image
                     * 
                     */
                    void SetIsResettable(const bool& _isResettable);

                    /**
                     * 判断参数 IsResettable 是否已赋值
                     * @return IsResettable 是否已赋值
                     * 
                     */
                    bool IsResettableHasBeenSet() const;

                    /**
                     * 获取Non-Resettable flag. If the image is resettable, it will be ""
                     * @return NonResettableMessage Non-Resettable flag. If the image is resettable, it will be ""
                     * 
                     */
                    std::string GetNonResettableMessage() const;

                    /**
                     * 设置Non-Resettable flag. If the image is resettable, it will be ""
                     * @param _nonResettableMessage Non-Resettable flag. If the image is resettable, it will be ""
                     * 
                     */
                    void SetNonResettableMessage(const std::string& _nonResettableMessage);

                    /**
                     * 判断参数 NonResettableMessage 是否已赋值
                     * @return NonResettableMessage 是否已赋值
                     * 
                     */
                    bool NonResettableMessageHasBeenSet() const;

                private:

                    /**
                     * Image details
                     */
                    Blueprint m_blueprintInfo;
                    bool m_blueprintInfoHasBeenSet;

                    /**
                     * Whether the image can be reset as the target image
                     */
                    bool m_isResettable;
                    bool m_isResettableHasBeenSet;

                    /**
                     * Non-Resettable flag. If the image is resettable, it will be ""
                     */
                    std::string m_nonResettableMessage;
                    bool m_nonResettableMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEBLUEPRINT_H_
