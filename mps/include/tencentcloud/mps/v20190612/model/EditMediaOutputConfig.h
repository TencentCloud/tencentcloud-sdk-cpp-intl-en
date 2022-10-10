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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAOUTPUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Configuration for output files of video editing
                */
                class EditMediaOutputConfig : public AbstractModel
                {
                public:
                    EditMediaOutputConfig();
                    ~EditMediaOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Format. Valid values: `mp4` (default), `hls`, `mov`, `flv`, `avi`
                     * @return Container Format. Valid values: `mp4` (default), `hls`, `mov`, `flv`, `avi`
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Format. Valid values: `mp4` (default), `hls`, `mov`, `flv`, `avi`
                     * @param Container Format. Valid values: `mp4` (default), `hls`, `mov`, `flv`, `avi`
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取The editing mode. Valid values are `normal` and `fast`. The default is `normal`, which indicates precise editing.
                     * @return Type The editing mode. Valid values are `normal` and `fast`. The default is `normal`, which indicates precise editing.
                     */
                    std::string GetType() const;

                    /**
                     * 设置The editing mode. Valid values are `normal` and `fast`. The default is `normal`, which indicates precise editing.
                     * @param Type The editing mode. Valid values are `normal` and `fast`. The default is `normal`, which indicates precise editing.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Format. Valid values: `mp4` (default), `hls`, `mov`, `flv`, `avi`
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * The editing mode. Valid values are `normal` and `fast`. The default is `normal`, which indicates precise editing.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAOUTPUTCONFIG_H_
