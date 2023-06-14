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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTCLSLOGTOPICSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTCLSLOGTOPICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/LogSetInfo.h>
#include <tencentcloud/cdn/v20180606/model/TopicInfo.h>
#include <tencentcloud/cdn/v20180606/model/ExtraLogset.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ListClsLogTopics response structure.
                */
                class ListClsLogTopicsResponse : public AbstractModel
                {
                public:
                    ListClsLogTopicsResponse();
                    ~ListClsLogTopicsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of logsets in the Shanghai region
                     * @return Logset Information of logsets in the Shanghai region
                     * 
                     */
                    LogSetInfo GetLogset() const;

                    /**
                     * 判断参数 Logset 是否已赋值
                     * @return Logset 是否已赋值
                     * 
                     */
                    bool LogsetHasBeenSet() const;

                    /**
                     * 获取Information of log topics in the Shanghai region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Topics Information of log topics in the Shanghai region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TopicInfo> GetTopics() const;

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取Information on logsets in regions except Shanghai
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ExtraLogset Information on logsets in regions except Shanghai
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ExtraLogset> GetExtraLogset() const;

                    /**
                     * 判断参数 ExtraLogset 是否已赋值
                     * @return ExtraLogset 是否已赋值
                     * 
                     */
                    bool ExtraLogsetHasBeenSet() const;

                private:

                    /**
                     * Information of logsets in the Shanghai region
                     */
                    LogSetInfo m_logset;
                    bool m_logsetHasBeenSet;

                    /**
                     * Information of log topics in the Shanghai region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TopicInfo> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * Information on logsets in regions except Shanghai
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ExtraLogset> m_extraLogset;
                    bool m_extraLogsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTCLSLOGTOPICSRESPONSE_H_
