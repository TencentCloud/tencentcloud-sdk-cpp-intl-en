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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_LABEL_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_LABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * The label information.
                */
                class Label : public AbstractModel
                {
                public:
                    Label();
                    ~Label() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The label ID.
                     * @return LabelId The label ID.
                     * 
                     */
                    uint64_t GetLabelId() const;

                    /**
                     * 设置The label ID.
                     * @param _labelId The label ID.
                     * 
                     */
                    void SetLabelId(const uint64_t& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取The label name.
                     * @return LabelName The label name.
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置The label name.
                     * @param _labelName The label name.
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
                     * 获取The number of DIDs.
                     * @return DidCount The number of DIDs.
                     * 
                     */
                    int64_t GetDidCount() const;

                    /**
                     * 设置The number of DIDs.
                     * @param _didCount The number of DIDs.
                     * 
                     */
                    void SetDidCount(const int64_t& _didCount);

                    /**
                     * 判断参数 DidCount 是否已赋值
                     * @return DidCount 是否已赋值
                     * 
                     */
                    bool DidCountHasBeenSet() const;

                    /**
                     * 获取The DID of the creator.
                     * @return Did The DID of the creator.
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置The DID of the creator.
                     * @param _did The DID of the creator.
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取The network ID.
                     * @return ClusterId The network ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The network ID.
                     * @param _clusterId The network ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
                     * @param _createTime The creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置The group ID.
                     * @param _groupId The group ID.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * The label ID.
                     */
                    uint64_t m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * The label name.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * The number of DIDs.
                     */
                    int64_t m_didCount;
                    bool m_didCountHasBeenSet;

                    /**
                     * The DID of the creator.
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_LABEL_H_
