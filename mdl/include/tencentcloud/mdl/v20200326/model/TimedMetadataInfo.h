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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATAINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATAINFO_H_

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
                * Transparent transmission of meta information plan configuration.
                */
                class TimedMetadataInfo : public AbstractModel
                {
                public:
                    TimedMetadataInfo();
                    ~TimedMetadataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64-encoded id3 metadata information, with a maximum limit of 1024 characters.
                     * @return ID3 Base64-encoded id3 metadata information, with a maximum limit of 1024 characters.
                     * 
                     */
                    std::string GetID3() const;

                    /**
                     * 设置Base64-encoded id3 metadata information, with a maximum limit of 1024 characters.
                     * @param _iD3 Base64-encoded id3 metadata information, with a maximum limit of 1024 characters.
                     * 
                     */
                    void SetID3(const std::string& _iD3);

                    /**
                     * 判断参数 ID3 是否已赋值
                     * @return ID3 是否已赋值
                     * 
                     */
                    bool ID3HasBeenSet() const;

                private:

                    /**
                     * Base64-encoded id3 metadata information, with a maximum limit of 1024 characters.
                     */
                    std::string m_iD3;
                    bool m_iD3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATAINFO_H_
