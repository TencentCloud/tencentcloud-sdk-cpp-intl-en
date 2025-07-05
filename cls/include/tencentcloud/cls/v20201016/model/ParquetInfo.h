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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ParquetKeyInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * `Parquet` contents
                */
                class ParquetInfo : public AbstractModel
                {
                public:
                    ParquetInfo();
                    ~ParquetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`ParquetKeyInfo` array
                     * @return ParquetKeyInfo `ParquetKeyInfo` array
                     * 
                     */
                    std::vector<ParquetKeyInfo> GetParquetKeyInfo() const;

                    /**
                     * 设置`ParquetKeyInfo` array
                     * @param _parquetKeyInfo `ParquetKeyInfo` array
                     * 
                     */
                    void SetParquetKeyInfo(const std::vector<ParquetKeyInfo>& _parquetKeyInfo);

                    /**
                     * 判断参数 ParquetKeyInfo 是否已赋值
                     * @return ParquetKeyInfo 是否已赋值
                     * 
                     */
                    bool ParquetKeyInfoHasBeenSet() const;

                private:

                    /**
                     * `ParquetKeyInfo` array
                     */
                    std::vector<ParquetKeyInfo> m_parquetKeyInfo;
                    bool m_parquetKeyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETINFO_H_
