/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_ATTACHEDINPUTINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_ATTACHEDINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AudioSelectorInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Media input associated with media channel.
                */
                class AttachedInputInfo : public AbstractModel
                {
                public:
                    AttachedInputInfo();
                    ~AttachedInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media input ID.
                     * @return Id Media input ID.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Media input ID.
                     * @param Id Media input ID.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Audio selector for media input. Quantity limit: [0,20]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioSelectors Audio selector for media input. Quantity limit: [0,20]
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioSelectorInfo> GetAudioSelectors() const;

                    /**
                     * 设置Audio selector for media input. Quantity limit: [0,20]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AudioSelectors Audio selector for media input. Quantity limit: [0,20]
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudioSelectors(const std::vector<AudioSelectorInfo>& _audioSelectors);

                    /**
                     * 判断参数 AudioSelectors 是否已赋值
                     * @return AudioSelectors 是否已赋值
                     */
                    bool AudioSelectorsHasBeenSet() const;

                private:

                    /**
                     * Media input ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Audio selector for media input. Quantity limit: [0,20]
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioSelectorInfo> m_audioSelectors;
                    bool m_audioSelectorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_ATTACHEDINPUTINFO_H_
