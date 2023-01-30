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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLSLOGSETINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLSLOGSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClsTopicInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CLS logset information
                */
                class ClsLogsetInfo : public AbstractModel
                {
                public:
                    ClsLogsetInfo();
                    ~ClsLogsetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Logset ID
                     * @return LogsetID Logset ID
                     */
                    std::string GetLogsetID() const;

                    /**
                     * 设置Logset ID
                     * @param LogsetID Logset ID
                     */
                    void SetLogsetID(const std::string& _logsetID);

                    /**
                     * 判断参数 LogsetID 是否已赋值
                     * @return LogsetID 是否已赋值
                     */
                    bool LogsetIDHasBeenSet() const;

                    /**
                     * 获取Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogsetName Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LogsetName Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取List of CLS topics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicList List of CLS topics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClsTopicInfo> GetTopicList() const;

                    /**
                     * 设置List of CLS topics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TopicList List of CLS topics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicList(const std::vector<ClsTopicInfo>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     */
                    bool TopicListHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetID;
                    bool m_logsetIDHasBeenSet;

                    /**
                     * Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * List of CLS topics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClsTopicInfo> m_topicList;
                    bool m_topicListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLSLOGSETINFO_H_
