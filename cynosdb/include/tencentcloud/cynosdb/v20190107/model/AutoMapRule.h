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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOMAPRULE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOMAPRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Advanced mapping, automated mapping rule
                */
                class AutoMapRule : public AbstractModel
                {
                public:
                    AutoMapRule();
                    ~AutoMapRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source instance Id
                     * @return SrcInstanceId Source instance Id
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance Id
                     * @param _srcInstanceId Source instance Id
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取Source database regular
                     * @return SrcDatabaseRegex Source database regular
                     * 
                     */
                    std::string GetSrcDatabaseRegex() const;

                    /**
                     * 设置Source database regular
                     * @param _srcDatabaseRegex Source database regular
                     * 
                     */
                    void SetSrcDatabaseRegex(const std::string& _srcDatabaseRegex);

                    /**
                     * 判断参数 SrcDatabaseRegex 是否已赋值
                     * @return SrcDatabaseRegex 是否已赋值
                     * 
                     */
                    bool SrcDatabaseRegexHasBeenSet() const;

                    /**
                     * 获取Source table regular
                     * @return SrcTableRegex Source table regular
                     * 
                     */
                    std::string GetSrcTableRegex() const;

                    /**
                     * 设置Source table regular
                     * @param _srcTableRegex Source table regular
                     * 
                     */
                    void SetSrcTableRegex(const std::string& _srcTableRegex);

                    /**
                     * 判断参数 SrcTableRegex 是否已赋值
                     * @return SrcTableRegex 是否已赋值
                     * 
                     */
                    bool SrcTableRegexHasBeenSet() const;

                    /**
                     * 获取Target database regular
                     * @return DstDatabaseRegex Target database regular
                     * 
                     */
                    std::string GetDstDatabaseRegex() const;

                    /**
                     * 设置Target database regular
                     * @param _dstDatabaseRegex Target database regular
                     * 
                     */
                    void SetDstDatabaseRegex(const std::string& _dstDatabaseRegex);

                    /**
                     * 判断参数 DstDatabaseRegex 是否已赋值
                     * @return DstDatabaseRegex 是否已赋值
                     * 
                     */
                    bool DstDatabaseRegexHasBeenSet() const;

                    /**
                     * 获取Target table regular
                     * @return DstTableRegex Target table regular
                     * 
                     */
                    std::string GetDstTableRegex() const;

                    /**
                     * 设置Target table regular
                     * @param _dstTableRegex Target table regular
                     * 
                     */
                    void SetDstTableRegex(const std::string& _dstTableRegex);

                    /**
                     * 判断参数 DstTableRegex 是否已赋值
                     * @return DstTableRegex 是否已赋值
                     * 
                     */
                    bool DstTableRegexHasBeenSet() const;

                private:

                    /**
                     * Source instance Id
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * Source database regular
                     */
                    std::string m_srcDatabaseRegex;
                    bool m_srcDatabaseRegexHasBeenSet;

                    /**
                     * Source table regular
                     */
                    std::string m_srcTableRegex;
                    bool m_srcTableRegexHasBeenSet;

                    /**
                     * Target database regular
                     */
                    std::string m_dstDatabaseRegex;
                    bool m_dstDatabaseRegexHasBeenSet;

                    /**
                     * Target table regular
                     */
                    std::string m_dstTableRegex;
                    bool m_dstTableRegexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOMAPRULE_H_
