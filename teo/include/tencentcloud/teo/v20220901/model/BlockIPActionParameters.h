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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BLOCKIPACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BLOCKIPACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Additional parameter for SecurityAction `BlockIP`.
                */
                class BlockIPActionParameters : public AbstractModel
                {
                public:
                    BlockIPActionParameters();
                    ~BlockIPActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Penalty duration for `BlockIP`. Units: <li>`s`: second, value range 1-120;</li> <li>`m`: minute, value range 1-120;</li> <li>`h`: hour, value range 1-48.</li>.
                     * @return Duration Penalty duration for `BlockIP`. Units: <li>`s`: second, value range 1-120;</li> <li>`m`: minute, value range 1-120;</li> <li>`h`: hour, value range 1-48.</li>.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Penalty duration for `BlockIP`. Units: <li>`s`: second, value range 1-120;</li> <li>`m`: minute, value range 1-120;</li> <li>`h`: hour, value range 1-48.</li>.
                     * @param _duration Penalty duration for `BlockIP`. Units: <li>`s`: second, value range 1-120;</li> <li>`m`: minute, value range 1-120;</li> <li>`h`: hour, value range 1-48.</li>.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * Penalty duration for `BlockIP`. Units: <li>`s`: second, value range 1-120;</li> <li>`m`: minute, value range 1-120;</li> <li>`h`: hour, value range 1-48.</li>.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BLOCKIPACTIONPARAMETERS_H_
