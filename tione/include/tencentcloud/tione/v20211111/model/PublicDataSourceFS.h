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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PUBLICDATASOURCEFS_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PUBLICDATASOURCEFS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Public cloud data source structure.
                */
                class PublicDataSourceFS : public AbstractModel
                {
                public:
                    PublicDataSourceFS();
                    ~PublicDataSourceFS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data source ID.
                     * @return DataSourceId Data source ID.
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置Data source ID.
                     * @param _dataSourceId Data source ID.
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取Relative subpath to the data source.
                     * @return SubPath Relative subpath to the data source.
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置Relative subpath to the data source.
                     * @param _subPath Relative subpath to the data source.
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                private:

                    /**
                     * Data source ID.
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * Relative subpath to the data source.
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PUBLICDATASOURCEFS_H_
