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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskStreamPara.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input parameters for the adaptive bitrate streaming task.
                */
                class ComplexAdaptiveDynamicStreamingTaskInput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskInput();
                    ~ComplexAdaptiveDynamicStreamingTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Adaptive bitrate streaming parameters.
                     * @return StreamPara Adaptive bitrate streaming parameters.
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTaskStreamPara GetStreamPara() const;

                    /**
                     * 设置Adaptive bitrate streaming parameters.
                     * @param _streamPara Adaptive bitrate streaming parameters.
                     * 
                     */
                    void SetStreamPara(const ComplexAdaptiveDynamicStreamingTaskStreamPara& _streamPara);

                    /**
                     * 判断参数 StreamPara 是否已赋值
                     * @return StreamPara 是否已赋值
                     * 
                     */
                    bool StreamParaHasBeenSet() const;

                private:

                    /**
                     * Adaptive bitrate streaming parameters.
                     */
                    ComplexAdaptiveDynamicStreamingTaskStreamPara m_streamPara;
                    bool m_streamParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
