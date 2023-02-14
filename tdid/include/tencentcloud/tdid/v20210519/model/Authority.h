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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_AUTHORITY_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_AUTHORITY_H_

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
                * The information of an authority.
                */
                class Authority : public AbstractModel
                {
                public:
                    Authority();
                    ~Authority() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The authority ID.
                     * @return Id The authority ID.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置The authority ID.
                     * @param Id The authority ID.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The DID.
                     * @return DidId The DID.
                     */
                    uint64_t GetDidId() const;

                    /**
                     * 设置The DID.
                     * @param DidId The DID.
                     */
                    void SetDidId(const uint64_t& _didId);

                    /**
                     * 判断参数 DidId 是否已赋值
                     * @return DidId 是否已赋值
                     */
                    bool DidIdHasBeenSet() const;

                    /**
                     * 获取The details of the DID.
                     * @return Did The details of the DID.
                     */
                    std::string GetDid() const;

                    /**
                     * 设置The details of the DID.
                     * @param Did The details of the DID.
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取The authority name.
                     * @return Name The authority name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The authority name.
                     * @param Name The authority name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether the authority is certified. `1`: Yes; `2`: No.
                     * @return Status Whether the authority is certified. `1`: Yes; `2`: No.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Whether the authority is certified. `1`: Yes; `2`: No.
                     * @param Status Whether the authority is certified. `1`: Yes; `2`: No.
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The DID service ID.
                     * @return DidServiceId The DID service ID.
                     */
                    uint64_t GetDidServiceId() const;

                    /**
                     * 设置The DID service ID.
                     * @param DidServiceId The DID service ID.
                     */
                    void SetDidServiceId(const uint64_t& _didServiceId);

                    /**
                     * 判断参数 DidServiceId 是否已赋值
                     * @return DidServiceId 是否已赋值
                     */
                    bool DidServiceIdHasBeenSet() const;

                    /**
                     * 获取The application ID.
                     * @return ContractAppId The application ID.
                     */
                    uint64_t GetContractAppId() const;

                    /**
                     * 设置The application ID.
                     * @param ContractAppId The application ID.
                     */
                    void SetContractAppId(const uint64_t& _contractAppId);

                    /**
                     * 判断参数 ContractAppId 是否已赋值
                     * @return ContractAppId 是否已赋值
                     */
                    bool ContractAppIdHasBeenSet() const;

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
                     * 获取The registration time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RegisterTime The registration time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 设置The registration time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RegisterTime The registration time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRegisterTime(const std::string& _registerTime);

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取The recognition time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RecognizeTime The recognition time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRecognizeTime() const;

                    /**
                     * 设置The recognition time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RecognizeTime The recognition time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRecognizeTime(const std::string& _recognizeTime);

                    /**
                     * 判断参数 RecognizeTime 是否已赋值
                     * @return RecognizeTime 是否已赋值
                     */
                    bool RecognizeTimeHasBeenSet() const;

                    /**
                     * 获取The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateTime The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CreateTime The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The last updated time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return UpdateTime The last updated time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last updated time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param UpdateTime The last updated time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 获取The on-chain label.
                     * @return LabelName The on-chain label.
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置The on-chain label.
                     * @param LabelName The on-chain label.
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     */
                    bool LabelNameHasBeenSet() const;

                private:

                    /**
                     * The authority ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The DID.
                     */
                    uint64_t m_didId;
                    bool m_didIdHasBeenSet;

                    /**
                     * The details of the DID.
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * The authority name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether the authority is certified. `1`: Yes; `2`: No.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The DID service ID.
                     */
                    uint64_t m_didServiceId;
                    bool m_didServiceIdHasBeenSet;

                    /**
                     * The application ID.
                     */
                    uint64_t m_contractAppId;
                    bool m_contractAppIdHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * The registration time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * The recognition time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_recognizeTime;
                    bool m_recognizeTimeHasBeenSet;

                    /**
                     * The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last updated time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

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
                     * The on-chain label.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_AUTHORITY_H_
