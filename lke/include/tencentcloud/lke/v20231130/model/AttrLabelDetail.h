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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Label details.
                */
                class AttrLabelDetail : public AbstractModel
                {
                public:
                    AttrLabelDetail();
                    ~AttrLabelDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Label ID.
                     * @return AttrBizId Label ID.
                     * 
                     */
                    std::string GetAttrBizId() const;

                    /**
                     * 设置Label ID.
                     * @param _attrBizId Label ID.
                     * 
                     */
                    void SetAttrBizId(const std::string& _attrBizId);

                    /**
                     * 判断参数 AttrBizId 是否已赋值
                     * @return AttrBizId 是否已赋值
                     * 
                     */
                    bool AttrBizIdHasBeenSet() const;

                    /**
                     * 获取Label identification.
                     * @return AttrKey Label identification.
                     * 
                     */
                    std::string GetAttrKey() const;

                    /**
                     * 设置Label identification.
                     * @param _attrKey Label identification.
                     * 
                     */
                    void SetAttrKey(const std::string& _attrKey);

                    /**
                     * 判断参数 AttrKey 是否已赋值
                     * @return AttrKey 是否已赋值
                     * 
                     */
                    bool AttrKeyHasBeenSet() const;

                    /**
                     * 获取Label name.
                     * @return AttrName Label name.
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 设置Label name.
                     * @param _attrName Label name.
                     * 
                     */
                    void SetAttrName(const std::string& _attrName);

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取Label value name.
                     * @return LabelNames Label value name.
                     * 
                     */
                    std::vector<std::string> GetLabelNames() const;

                    /**
                     * 设置Label value name.
                     * @param _labelNames Label value name.
                     * 
                     */
                    void SetLabelNames(const std::vector<std::string>& _labelNames);

                    /**
                     * 判断参数 LabelNames 是否已赋值
                     * @return LabelNames 是否已赋值
                     * 
                     */
                    bool LabelNamesHasBeenSet() const;

                    /**
                     * 获取Whether the label is being updated.
                     * @return IsUpdating Whether the label is being updated.
                     * 
                     */
                    bool GetIsUpdating() const;

                    /**
                     * 设置Whether the label is being updated.
                     * @param _isUpdating Whether the label is being updated.
                     * 
                     */
                    void SetIsUpdating(const bool& _isUpdating);

                    /**
                     * 判断参数 IsUpdating 是否已赋值
                     * @return IsUpdating 是否已赋值
                     * 
                     */
                    bool IsUpdatingHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
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
                     * 获取Status description.
                     * @return StatusDesc Status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description.
                     * @param _statusDesc Status description.
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Total number of label values.
                     * @return LabelTotalCount Total number of label values.
                     * 
                     */
                    std::string GetLabelTotalCount() const;

                    /**
                     * 设置Total number of label values.
                     * @param _labelTotalCount Total number of label values.
                     * 
                     */
                    void SetLabelTotalCount(const std::string& _labelTotalCount);

                    /**
                     * 判断参数 LabelTotalCount 是否已赋值
                     * @return LabelTotalCount 是否已赋值
                     * 
                     */
                    bool LabelTotalCountHasBeenSet() const;

                private:

                    /**
                     * Label ID.
                     */
                    std::string m_attrBizId;
                    bool m_attrBizIdHasBeenSet;

                    /**
                     * Label identification.
                     */
                    std::string m_attrKey;
                    bool m_attrKeyHasBeenSet;

                    /**
                     * Label name.
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * Label value name.
                     */
                    std::vector<std::string> m_labelNames;
                    bool m_labelNamesHasBeenSet;

                    /**
                     * Whether the label is being updated.
                     */
                    bool m_isUpdating;
                    bool m_isUpdatingHasBeenSet;

                    /**
                     * Status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Total number of label values.
                     */
                    std::string m_labelTotalCount;
                    bool m_labelTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELDETAIL_H_
