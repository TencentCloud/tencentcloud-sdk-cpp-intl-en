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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONTAGINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Common tag information (for query display scenarios), suitable for lightweight display of various asset tags such as table tags and field tags, for use in API responses such as GetTable.
                */
                class CommonTagInfo : public AbstractModel
                {
                public:
                    CommonTagInfo();
                    ~CommonTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag ID
                     * @return LabelId Tag ID
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置Tag ID
                     * @param _labelId Tag ID
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取Tag name.
                     * @return LabelName Tag name.
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置Tag name.
                     * @param _labelName Tag name.
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取Tag value ID. For property tags (LabelType=3), it can be 0.
                     * @return LabelValueId Tag value ID. For property tags (LabelType=3), it can be 0.
                     * 
                     */
                    std::string GetLabelValueId() const;

                    /**
                     * 设置Tag value ID. For property tags (LabelType=3), it can be 0.
                     * @param _labelValueId Tag value ID. For property tags (LabelType=3), it can be 0.
                     * 
                     */
                    void SetLabelValueId(const std::string& _labelValueId);

                    /**
                     * 判断参数 LabelValueId 是否已赋值
                     * @return LabelValueId 是否已赋值
                     * 
                     */
                    bool LabelValueIdHasBeenSet() const;

                    /**
                     * 获取Tag value. It can be empty for a masking tag (LabelType=4).
                     * @return LabelValue Tag value. It can be empty for a masking tag (LabelType=4).
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置Tag value. It can be empty for a masking tag (LabelType=4).
                     * @param _labelValue Tag value. It can be empty for a masking tag (LabelType=4).
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取Tag type. For valid values, see the LabelType enum definition: 1 - governance tag, 2 - custom tag, 3 - property tag, 4 - masking tag.
                     * @return Type Tag type. For valid values, see the LabelType enum definition: 1 - governance tag, 2 - custom tag, 3 - property tag, 4 - masking tag.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Tag type. For valid values, see the LabelType enum definition: 1 - governance tag, 2 - custom tag, 3 - property tag, 4 - masking tag.
                     * @param _type Tag type. For valid values, see the LabelType enum definition: 1 - governance tag, 2 - custom tag, 3 - property tag, 4 - masking tag.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether the tag has been deleted. true indicates that no record of this LabelId is found in meta_biz_label and the tag has been physically deleted; false (default) indicates that the tag still exists.
                     * @return Deleted Whether the tag has been deleted. true indicates that no record of this LabelId is found in meta_biz_label and the tag has been physically deleted; false (default) indicates that the tag still exists.
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 设置Whether the tag has been deleted. true indicates that no record of this LabelId is found in meta_biz_label and the tag has been physically deleted; false (default) indicates that the tag still exists.
                     * @param _deleted Whether the tag has been deleted. true indicates that no record of this LabelId is found in meta_biz_label and the tag has been physically deleted; false (default) indicates that the tag still exists.
                     * 
                     */
                    void SetDeleted(const bool& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * Tag ID
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * Tag name.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * Tag value ID. For property tags (LabelType=3), it can be 0.
                     */
                    std::string m_labelValueId;
                    bool m_labelValueIdHasBeenSet;

                    /**
                     * Tag value. It can be empty for a masking tag (LabelType=4).
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * Tag type. For valid values, see the LabelType enum definition: 1 - governance tag, 2 - custom tag, 3 - property tag, 4 - masking tag.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether the tag has been deleted. true indicates that no record of this LabelId is found in meta_biz_label and the tag has been physically deleted; false (default) indicates that the tag still exists.
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONTAGINFO_H_
