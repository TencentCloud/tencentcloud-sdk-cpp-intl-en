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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAANIMATEDGRAPHICSINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAANIMATEDGRAPHICSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAnimatedGraphicsItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Result information of animated image generating in VOD file
                */
                class MediaAnimatedGraphicsInfo : public AbstractModel
                {
                public:
                    MediaAnimatedGraphicsInfo();
                    ~MediaAnimatedGraphicsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result information of animated image generating task
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AnimatedGraphicsSet Result information of animated image generating task
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaAnimatedGraphicsItem> GetAnimatedGraphicsSet() const;

                    /**
                     * 设置Result information of animated image generating task
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _animatedGraphicsSet Result information of animated image generating task
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnimatedGraphicsSet(const std::vector<MediaAnimatedGraphicsItem>& _animatedGraphicsSet);

                    /**
                     * 判断参数 AnimatedGraphicsSet 是否已赋值
                     * @return AnimatedGraphicsSet 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicsSetHasBeenSet() const;

                private:

                    /**
                     * Result information of animated image generating task
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaAnimatedGraphicsItem> m_animatedGraphicsSet;
                    bool m_animatedGraphicsSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAANIMATEDGRAPHICSINFO_H_
