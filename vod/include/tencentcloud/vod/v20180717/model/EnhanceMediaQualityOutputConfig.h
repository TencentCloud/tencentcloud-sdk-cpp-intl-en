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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Remaster result file output
                */
                class EnhanceMediaQualityOutputConfig : public AbstractModel
                {
                public:
                    EnhanceMediaQualityOutputConfig();
                    ~EnhanceMediaQualityOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output file name, up to 64 characters. The system will specify the file name by default
                     * @return MediaName Output file name, up to 64 characters. The system will specify the file name by default
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Output file name, up to 64 characters. The system will specify the file name by default
                     * @param _mediaName Output file name, up to 64 characters. The system will specify the file name by default
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取Category ID, used for media classification management, can be obtained by [creating a category](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface, create a category, get the category ID.
<li>Default value: 0, which means other categories.</li>
                     * @return ClassId Category ID, used for media classification management, can be obtained by [creating a category](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface, create a category, get the category ID.
<li>Default value: 0, which means other categories.</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, used for media classification management, can be obtained by [creating a category](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface, create a category, get the category ID.
<li>Default value: 0, which means other categories.</li>
                     * @param _classId Category ID, used for media classification management, can be obtained by [creating a category](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface, create a category, get the category ID.
<li>Default value: 0, which means other categories.</li>
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取The expiration time of the output file, the file will be deleted after this time, the default is never to expire, the format is in accordance with the ISO 8601 standard, see [ISO date format description](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime The expiration time of the output file, the file will be deleted after this time, the default is never to expire, the format is in accordance with the ISO 8601 standard, see [ISO date format description](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiration time of the output file, the file will be deleted after this time, the default is never to expire, the format is in accordance with the ISO 8601 standard, see [ISO date format description](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _expireTime The expiration time of the output file, the file will be deleted after this time, the default is never to expire, the format is in accordance with the ISO 8601 standard, see [ISO date format description](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Output file name, up to 64 characters. The system will specify the file name by default
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Category ID, used for media classification management, can be obtained by [creating a category](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface, create a category, get the category ID.
<li>Default value: 0, which means other categories.</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The expiration time of the output file, the file will be deleted after this time, the default is never to expire, the format is in accordance with the ISO 8601 standard, see [ISO date format description](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYOUTPUTCONFIG_H_
