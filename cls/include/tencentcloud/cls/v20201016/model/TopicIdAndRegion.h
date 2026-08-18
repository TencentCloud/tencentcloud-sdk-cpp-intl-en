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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICIDANDREGION_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICIDANDREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Dashboard topic and region information
                */
                class TopicIdAndRegion : public AbstractModel
                {
                public:
                    TopicIdAndRegion();
                    ~TopicIdAndRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log topic id
                     * @return TopicId Log topic id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic id
                     * @param _topicId Log topic id
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
                     * 获取The ID of the region where the log topic ID is located.

id, region, abbreviation information follows:
- 1: Guangzhou, ap-guangzhou
- 4: Shanghai, ap-shanghai
-5, Hong Kong (China), ap-hongkong
- 7: Shanghai Finance, ap-shanghai-fsi
-8, Beijing, ap-beijing
- 9, Singapore, ap-singapore
- 11: Shenzhen Finance, ap-shenzhen-fsi
-15, Silicon Valley, na-siliconvalley
-16, Chengdu, ap-chengdu
-17, Frankfurt, eu-frankfurt
- 18, Seoul, ap-seoul
- 19: Chongqing, ap-chongqing
- 22, Virginia, na-ashburn
- 23, Bangkok, ap-bangkok
-25, Tokyo, ap-tokyo
- 33, Nanjing, ap-nanjing
-46, Beijing Finance, ap-beijing-fsi
- 72, Jakarta, ap-jakarta
-74, São Paulo, sa-saopaulo
                     * @return RegionId The ID of the region where the log topic ID is located.

id, region, abbreviation information follows:
- 1: Guangzhou, ap-guangzhou
- 4: Shanghai, ap-shanghai
-5, Hong Kong (China), ap-hongkong
- 7: Shanghai Finance, ap-shanghai-fsi
-8, Beijing, ap-beijing
- 9, Singapore, ap-singapore
- 11: Shenzhen Finance, ap-shenzhen-fsi
-15, Silicon Valley, na-siliconvalley
-16, Chengdu, ap-chengdu
-17, Frankfurt, eu-frankfurt
- 18, Seoul, ap-seoul
- 19: Chongqing, ap-chongqing
- 22, Virginia, na-ashburn
- 23, Bangkok, ap-bangkok
-25, Tokyo, ap-tokyo
- 33, Nanjing, ap-nanjing
-46, Beijing Finance, ap-beijing-fsi
- 72, Jakarta, ap-jakarta
-74, São Paulo, sa-saopaulo
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置The ID of the region where the log topic ID is located.

id, region, abbreviation information follows:
- 1: Guangzhou, ap-guangzhou
- 4: Shanghai, ap-shanghai
-5, Hong Kong (China), ap-hongkong
- 7: Shanghai Finance, ap-shanghai-fsi
-8, Beijing, ap-beijing
- 9, Singapore, ap-singapore
- 11: Shenzhen Finance, ap-shenzhen-fsi
-15, Silicon Valley, na-siliconvalley
-16, Chengdu, ap-chengdu
-17, Frankfurt, eu-frankfurt
- 18, Seoul, ap-seoul
- 19: Chongqing, ap-chongqing
- 22, Virginia, na-ashburn
- 23, Bangkok, ap-bangkok
-25, Tokyo, ap-tokyo
- 33, Nanjing, ap-nanjing
-46, Beijing Finance, ap-beijing-fsi
- 72, Jakarta, ap-jakarta
-74, São Paulo, sa-saopaulo
                     * @param _regionId The ID of the region where the log topic ID is located.

id, region, abbreviation information follows:
- 1: Guangzhou, ap-guangzhou
- 4: Shanghai, ap-shanghai
-5, Hong Kong (China), ap-hongkong
- 7: Shanghai Finance, ap-shanghai-fsi
-8, Beijing, ap-beijing
- 9, Singapore, ap-singapore
- 11: Shenzhen Finance, ap-shenzhen-fsi
-15, Silicon Valley, na-siliconvalley
-16, Chengdu, ap-chengdu
-17, Frankfurt, eu-frankfurt
- 18, Seoul, ap-seoul
- 19: Chongqing, ap-chongqing
- 22, Virginia, na-ashburn
- 23, Bangkok, ap-bangkok
-25, Tokyo, ap-tokyo
- 33, Nanjing, ap-nanjing
-46, Beijing Finance, ap-beijing-fsi
- 72, Jakarta, ap-jakarta
-74, São Paulo, sa-saopaulo
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Log topic id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * The ID of the region where the log topic ID is located.

id, region, abbreviation information follows:
- 1: Guangzhou, ap-guangzhou
- 4: Shanghai, ap-shanghai
-5, Hong Kong (China), ap-hongkong
- 7: Shanghai Finance, ap-shanghai-fsi
-8, Beijing, ap-beijing
- 9, Singapore, ap-singapore
- 11: Shenzhen Finance, ap-shenzhen-fsi
-15, Silicon Valley, na-siliconvalley
-16, Chengdu, ap-chengdu
-17, Frankfurt, eu-frankfurt
- 18, Seoul, ap-seoul
- 19: Chongqing, ap-chongqing
- 22, Virginia, na-ashburn
- 23, Bangkok, ap-bangkok
-25, Tokyo, ap-tokyo
- 33, Nanjing, ap-nanjing
-46, Beijing Finance, ap-beijing-fsi
- 72, Jakarta, ap-jakarta
-74, São Paulo, sa-saopaulo
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICIDANDREGION_H_
