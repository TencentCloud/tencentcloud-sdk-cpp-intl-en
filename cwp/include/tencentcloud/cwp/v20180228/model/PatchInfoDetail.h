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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PATCHINFODETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PATCHINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Patch information details
                */
                class PatchInfoDetail : public AbstractModel
                {
                public:
                    PatchInfoDetail();
                    ~PatchInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取KB No.
                     * @return KBNo KB No.
                     * 
                     */
                    std::string GetKBNo() const;

                    /**
                     * 设置KB No.
                     * @param _kBNo KB No.
                     * 
                     */
                    void SetKBNo(const std::string& _kBNo);

                    /**
                     * 判断参数 KBNo 是否已赋值
                     * @return KBNo 是否已赋值
                     * 
                     */
                    bool KBNoHasBeenSet() const;

                    /**
                     * 获取KB name
                     * @return Name KB name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置KB name
                     * @param _name KB name
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
                     * 获取2025-05
                     * @return PublishTime 2025-05
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置2025-05
                     * @param _publishTime 2025-05
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability impacted by KB
                     * @return RelatedCveId Vulnerability impacted by KB
                     * 
                     */
                    std::vector<std::string> GetRelatedCveId() const;

                    /**
                     * 设置Vulnerability impacted by KB
                     * @param _relatedCveId Vulnerability impacted by KB
                     * 
                     */
                    void SetRelatedCveId(const std::vector<std::string>& _relatedCveId);

                    /**
                     * 判断参数 RelatedCveId 是否已赋值
                     * @return RelatedCveId 是否已赋值
                     * 
                     */
                    bool RelatedCveIdHasBeenSet() const;

                    /**
                     * 获取KB documentation
                     * @return KbDocUrl KB documentation
                     * 
                     */
                    std::string GetKbDocUrl() const;

                    /**
                     * 设置KB documentation
                     * @param _kbDocUrl KB documentation
                     * 
                     */
                    void SetKbDocUrl(const std::string& _kbDocUrl);

                    /**
                     * 判断参数 KbDocUrl 是否已赋值
                     * @return KbDocUrl 是否已赋值
                     * 
                     */
                    bool KbDocUrlHasBeenSet() const;

                    /**
                     * 获取KB id No.
                     * @return Id KB id No.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置KB id No.
                     * @param _id KB id No.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * KB No.
                     */
                    std::string m_kBNo;
                    bool m_kBNoHasBeenSet;

                    /**
                     * KB name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 2025-05
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * Vulnerability impacted by KB
                     */
                    std::vector<std::string> m_relatedCveId;
                    bool m_relatedCveIdHasBeenSet;

                    /**
                     * KB documentation
                     */
                    std::string m_kbDocUrl;
                    bool m_kbDocUrlHasBeenSet;

                    /**
                     * KB id No.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PATCHINFODETAIL_H_
