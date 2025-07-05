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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_TIERINGDETAILINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_TIERINGDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * The details about tiered storage.
                */
                class TieringDetailInfo : public AbstractModel
                {
                public:
                    TieringDetailInfo();
                    ~TieringDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STANDARD_IA storage usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TieringSizeInBytes STANDARD_IA storage usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTieringSizeInBytes() const;

                    /**
                     * 设置STANDARD_IA storage usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tieringSizeInBytes STANDARD_IA storage usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTieringSizeInBytes(const int64_t& _tieringSizeInBytes);

                    /**
                     * 判断参数 TieringSizeInBytes 是否已赋值
                     * @return TieringSizeInBytes 是否已赋值
                     * 
                     */
                    bool TieringSizeInBytesHasBeenSet() const;

                private:

                    /**
                     * STANDARD_IA storage usage
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tieringSizeInBytes;
                    bool m_tieringSizeInBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_TIERINGDETAILINFO_H_
