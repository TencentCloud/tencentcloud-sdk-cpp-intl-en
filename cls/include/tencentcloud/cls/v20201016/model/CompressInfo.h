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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_COMPRESSINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_COMPRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Compression configuration of shipped log
                */
                class CompressInfo : public AbstractModel
                {
                public:
                    CompressInfo();
                    ~CompressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compression format. Valid values: `gzip`; `lzop`; `snappy`; `none` (no compression)
                     * @return Format Compression format. Valid values: `gzip`; `lzop`; `snappy`; `none` (no compression)
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Compression format. Valid values: `gzip`; `lzop`; `snappy`; `none` (no compression)
                     * @param _format Compression format. Valid values: `gzip`; `lzop`; `snappy`; `none` (no compression)
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * Compression format. Valid values: `gzip`; `lzop`; `snappy`; `none` (no compression)
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_COMPRESSINFO_H_
