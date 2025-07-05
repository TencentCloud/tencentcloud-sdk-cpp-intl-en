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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATEHDCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATEHDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * EditMediaT TSC Transcoding Config.
                */
                class EditMediaTEHDConfig : public AbstractModel
                {
                public:
                    EditMediaTEHDConfig();
                    ~EditMediaTEHDConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TSC Transcoding type, optional values: <li>TEHD-100 means TSC Transcoding-definition-100;</li> <li>OFF means turning off TSC Transcoding-definition. </li>Leave it blank to indicate OFF.
                     * @return Type TSC Transcoding type, optional values: <li>TEHD-100 means TSC Transcoding-definition-100;</li> <li>OFF means turning off TSC Transcoding-definition. </li>Leave it blank to indicate OFF.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置TSC Transcoding type, optional values: <li>TEHD-100 means TSC Transcoding-definition-100;</li> <li>OFF means turning off TSC Transcoding-definition. </li>Leave it blank to indicate OFF.
                     * @param _type TSC Transcoding type, optional values: <li>TEHD-100 means TSC Transcoding-definition-100;</li> <li>OFF means turning off TSC Transcoding-definition. </li>Leave it blank to indicate OFF.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * TSC Transcoding type, optional values: <li>TEHD-100 means TSC Transcoding-definition-100;</li> <li>OFF means turning off TSC Transcoding-definition. </li>Leave it blank to indicate OFF.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATEHDCONFIG_H_
