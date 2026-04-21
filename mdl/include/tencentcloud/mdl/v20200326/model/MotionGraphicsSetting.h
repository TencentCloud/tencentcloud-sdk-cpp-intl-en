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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_MOTIONGRAPHICSSETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_MOTIONGRAPHICSSETTING_H_

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
                * 
                */
                class MotionGraphicsSetting : public AbstractModel
                {
                public:
                    MotionGraphicsSetting();
                    ~MotionGraphicsSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable dynamic graphic overlay, '0' not enabled, '1' enabled; Default 0.
                     * @return MotionGraphicsOverlayEnabled Whether to enable dynamic graphic overlay, '0' not enabled, '1' enabled; Default 0.
                     * 
                     */
                    int64_t GetMotionGraphicsOverlayEnabled() const;

                    /**
                     * 设置Whether to enable dynamic graphic overlay, '0' not enabled, '1' enabled; Default 0.
                     * @param _motionGraphicsOverlayEnabled Whether to enable dynamic graphic overlay, '0' not enabled, '1' enabled; Default 0.
                     * 
                     */
                    void SetMotionGraphicsOverlayEnabled(const int64_t& _motionGraphicsOverlayEnabled);

                    /**
                     * 判断参数 MotionGraphicsOverlayEnabled 是否已赋值
                     * @return MotionGraphicsOverlayEnabled 是否已赋值
                     * 
                     */
                    bool MotionGraphicsOverlayEnabledHasBeenSet() const;

                private:

                    /**
                     * Whether to enable dynamic graphic overlay, '0' not enabled, '1' enabled; Default 0.
                     */
                    int64_t m_motionGraphicsOverlayEnabled;
                    bool m_motionGraphicsOverlayEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_MOTIONGRAPHICSSETTING_H_
