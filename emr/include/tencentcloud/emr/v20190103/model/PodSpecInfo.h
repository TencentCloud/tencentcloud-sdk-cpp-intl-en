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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODSPECINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODSPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PodNewSpec.h>
#include <tencentcloud/emr/v20190103/model/PodNewParameter.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod-related information.
                */
                class PodSpecInfo : public AbstractModel
                {
                public:
                    PodSpecInfo();
                    ~PodSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod specifications and source information, which are specified when Pod resources are used for the scale-out.
                     * @return PodSpec Pod specifications and source information, which are specified when Pod resources are used for the scale-out.
                     * 
                     */
                    PodNewSpec GetPodSpec() const;

                    /**
                     * 设置Pod specifications and source information, which are specified when Pod resources are used for the scale-out.
                     * @param _podSpec Pod specifications and source information, which are specified when Pod resources are used for the scale-out.
                     * 
                     */
                    void SetPodSpec(const PodNewSpec& _podSpec);

                    /**
                     * 判断参数 PodSpec 是否已赋值
                     * @return PodSpec 是否已赋值
                     * 
                     */
                    bool PodSpecHasBeenSet() const;

                    /**
                     * 获取Pod custom permission and parameter.
                     * @return PodParameter Pod custom permission and parameter.
                     * 
                     */
                    PodNewParameter GetPodParameter() const;

                    /**
                     * 设置Pod custom permission and parameter.
                     * @param _podParameter Pod custom permission and parameter.
                     * 
                     */
                    void SetPodParameter(const PodNewParameter& _podParameter);

                    /**
                     * 判断参数 PodParameter 是否已赋值
                     * @return PodParameter 是否已赋值
                     * 
                     */
                    bool PodParameterHasBeenSet() const;

                private:

                    /**
                     * Pod specifications and source information, which are specified when Pod resources are used for the scale-out.
                     */
                    PodNewSpec m_podSpec;
                    bool m_podSpecHasBeenSet;

                    /**
                     * Pod custom permission and parameter.
                     */
                    PodNewParameter m_podParameter;
                    bool m_podParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODSPECINFO_H_
