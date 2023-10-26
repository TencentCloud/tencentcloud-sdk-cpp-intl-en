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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_TAGDATAINFO_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_TAGDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Tag information.
                */
                class TagDataInfo : public AbstractModel
                {
                public:
                    TagDataInfo();
                    ~TagDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cost allocation tag key.
                     * @return TagKey Cost allocation tag key.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Cost allocation tag key.
                     * @param _tagKey Cost allocation tag key.
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取Tag type. Valid values: `0` (general tags), `1` (cost allocation tags).
                     * @return Status Tag type. Valid values: `0` (general tags), `1` (cost allocation tags).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Tag type. Valid values: `0` (general tags), `1` (cost allocation tags).
                     * @param _status Tag type. Valid values: `0` (general tags), `1` (cost allocation tags).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Time to set the cost allocation tag. It will not be returned if `Status` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Time to set the cost allocation tag. It will not be returned if `Status` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Time to set the cost allocation tag. It will not be returned if `Status` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Time to set the cost allocation tag. It will not be returned if `Status` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Cost allocation tag key.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag type. Valid values: `0` (general tags), `1` (cost allocation tags).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Time to set the cost allocation tag. It will not be returned if `Status` is `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_TAGDATAINFO_H_
