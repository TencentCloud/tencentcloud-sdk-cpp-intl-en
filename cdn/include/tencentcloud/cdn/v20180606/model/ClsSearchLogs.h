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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CLSSEARCHLOGS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CLSSEARCHLOGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ClsLogObject.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CLS log search result
                */
                class ClsSearchLogs : public AbstractModel
                {
                public:
                    ClsSearchLogs();
                    ~ClsSearchLogs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cursor for more search results
                     * @return Context Cursor for more search results
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Cursor for more search results
                     * @param _context Cursor for more search results
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Whether all search results have been returned
                     * @return Listover Whether all search results have been returned
                     * 
                     */
                    bool GetListover() const;

                    /**
                     * 设置Whether all search results have been returned
                     * @param _listover Whether all search results have been returned
                     * 
                     */
                    void SetListover(const bool& _listover);

                    /**
                     * 判断参数 Listover 是否已赋值
                     * @return Listover 是否已赋值
                     * 
                     */
                    bool ListoverHasBeenSet() const;

                    /**
                     * 获取Log content information
                     * @return Results Log content information
                     * 
                     */
                    std::vector<ClsLogObject> GetResults() const;

                    /**
                     * 设置Log content information
                     * @param _results Log content information
                     * 
                     */
                    void SetResults(const std::vector<ClsLogObject>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * Cursor for more search results
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Whether all search results have been returned
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                    /**
                     * Log content information
                     */
                    std::vector<ClsLogObject> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CLSSEARCHLOGS_H_
