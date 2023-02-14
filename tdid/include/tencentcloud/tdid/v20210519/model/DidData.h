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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_DIDDATA_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_DIDDATA_H_

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
                * The information of DIDs.
                */
                class DidData : public AbstractModel
                {
                public:
                    DidData();
                    ~DidData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The service ID.
                     * @return ServiceId The service ID.
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置The service ID.
                     * @param ServiceId The service ID.
                     */
                    void SetServiceId(const uint64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置The group ID.
                     * @param GroupId The group ID.
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The application name.
                     * @return AppName The application name.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The application name.
                     * @param AppName The application name.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The DID.
                     * @return Did The DID.
                     */
                    std::string GetDid() const;

                    /**
                     * 设置The DID.
                     * @param Did The DID.
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param Remark Remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取The status of the authority. `1`: Not registered; `2`: Not certified; `3`: Certified.
                     * @return AuthorityState The status of the authority. `1`: Not registered; `2`: Not certified; `3`: Certified.
                     */
                    int64_t GetAuthorityState() const;

                    /**
                     * 设置The status of the authority. `1`: Not registered; `2`: Not certified; `3`: Certified.
                     * @param AuthorityState The status of the authority. `1`: Not registered; `2`: Not certified; `3`: Certified.
                     */
                    void SetAuthorityState(const int64_t& _authorityState);

                    /**
                     * 判断参数 AuthorityState 是否已赋值
                     * @return AuthorityState 是否已赋值
                     */
                    bool AuthorityStateHasBeenSet() const;

                    /**
                     * 获取The label of the DID.
                     * @return LabelName The label of the DID.
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置The label of the DID.
                     * @param LabelName The label of the DID.
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取The DID creation time.
                     * @return CreatedAt The DID creation time.
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置The DID creation time.
                     * @param CreatedAt The DID creation time.
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取The network ID.
                     * @return ClusterId The network ID.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The network ID.
                     * @param ClusterId The network ID.
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The consortium name.
                     * @return AllianceName The consortium name.
                     */
                    std::string GetAllianceName() const;

                    /**
                     * 设置The consortium name.
                     * @param AllianceName The consortium name.
                     */
                    void SetAllianceName(const std::string& _allianceName);

                    /**
                     * 判断参数 AllianceName 是否已赋值
                     * @return AllianceName 是否已赋值
                     */
                    bool AllianceNameHasBeenSet() const;

                    /**
                     * 获取The label ID.
                     * @return LabelId The label ID.
                     */
                    uint64_t GetLabelId() const;

                    /**
                     * 设置The label ID.
                     * @param LabelId The label ID.
                     */
                    void SetLabelId(const uint64_t& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     */
                    bool LabelIdHasBeenSet() const;

                private:

                    /**
                     * The service ID.
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * The group ID.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The DID.
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * The status of the authority. `1`: Not registered; `2`: Not certified; `3`: Certified.
                     */
                    int64_t m_authorityState;
                    bool m_authorityStateHasBeenSet;

                    /**
                     * The label of the DID.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * The DID creation time.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The consortium name.
                     */
                    std::string m_allianceName;
                    bool m_allianceNameHasBeenSet;

                    /**
                     * The label ID.
                     */
                    uint64_t m_labelId;
                    bool m_labelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_DIDDATA_H_
