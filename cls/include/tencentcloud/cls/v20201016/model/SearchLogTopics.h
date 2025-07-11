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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGTOPICS_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGTOPICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/SearchLogErrors.h>
#include <tencentcloud/cls/v20201016/model/SearchLogInfos.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Multi-topic search return information
                */
                class SearchLogTopics : public AbstractModel
                {
                public:
                    SearchLogTopics();
                    ~SearchLogTopics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error information for multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Errors Error information for multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SearchLogErrors> GetErrors() const;

                    /**
                     * 设置Error information for multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _errors Error information for multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrors(const std::vector<SearchLogErrors>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取Information for each log topic in multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Infos Information for each log topic in multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SearchLogInfos> GetInfos() const;

                    /**
                     * 设置Information for each log topic in multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _infos Information for each log topic in multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInfos(const std::vector<SearchLogInfos>& _infos);

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * Error information for multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SearchLogErrors> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * Information for each log topic in multi-log topic searchNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SearchLogInfos> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGTOPICS_H_
