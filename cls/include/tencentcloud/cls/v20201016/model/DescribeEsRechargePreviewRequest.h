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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEESRECHARGEPREVIEWREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEESRECHARGEPREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EsInfo.h>
#include <tencentcloud/cls/v20201016/model/EsImportInfo.h>
#include <tencentcloud/cls/v20201016/model/EsTimeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeEsRechargePreview request structure.
                */
                class DescribeEsRechargePreviewRequest : public AbstractModel
                {
                public:
                    DescribeEsRechargePreviewRequest();
                    ~DescribeEsRechargePreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name: Length not exceeding 64 characters.
                     * @return Name Name: Length not exceeding 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name: Length not exceeding 64 characters.
                     * @param _name Name: Length not exceeding 64 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @return TopicId Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @param _topicId Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Index information. Different indexes can be separated by English commas and support wildcards.
                     * @return Index Index information. Different indexes can be separated by English commas and support wildcards.
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Index information. Different indexes can be separated by English commas and support wildcards.
                     * @param _index Index information. Different indexes can be separated by English commas and support wildcards.
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Elasticsearch Query Statement.
                     * @return Query Elasticsearch Query Statement.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Elasticsearch Query Statement.
                     * @param _query Elasticsearch Query Statement.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取es cluster configuration.
                     * @return EsInfo es cluster configuration.
                     * 
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置es cluster configuration.
                     * @param _esInfo es cluster configuration.
                     * 
                     */
                    void SetEsInfo(const EsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     * 
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取es import information.
                     * @return ImportInfo es import information.
                     * 
                     */
                    EsImportInfo GetImportInfo() const;

                    /**
                     * 设置es import information.
                     * @param _importInfo es import information.
                     * 
                     */
                    void SetImportInfo(const EsImportInfo& _importInfo);

                    /**
                     * 判断参数 ImportInfo 是否已赋值
                     * @return ImportInfo 是否已赋值
                     * 
                     */
                    bool ImportInfoHasBeenSet() const;

                    /**
                     * 获取Field information of es import time.
                     * @return TimeInfo Field information of es import time.
                     * 
                     */
                    EsTimeInfo GetTimeInfo() const;

                    /**
                     * 设置Field information of es import time.
                     * @param _timeInfo Field information of es import time.
                     * 
                     */
                    void SetTimeInfo(const EsTimeInfo& _timeInfo);

                    /**
                     * 判断参数 TimeInfo 是否已赋值
                     * @return TimeInfo 是否已赋值
                     * 
                     */
                    bool TimeInfoHasBeenSet() const;

                private:

                    /**
                     * Name: Length not exceeding 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Index information. Different indexes can be separated by English commas and support wildcards.
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Elasticsearch Query Statement.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * es cluster configuration.
                     */
                    EsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * es import information.
                     */
                    EsImportInfo m_importInfo;
                    bool m_importInfoHasBeenSet;

                    /**
                     * Field information of es import time.
                     */
                    EsTimeInfo m_timeInfo;
                    bool m_timeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEESRECHARGEPREVIEWREQUEST_H_
