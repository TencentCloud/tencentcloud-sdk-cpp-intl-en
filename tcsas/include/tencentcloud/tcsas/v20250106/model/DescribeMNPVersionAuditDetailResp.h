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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPVERSIONAUDITDETAILRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPVERSIONAUDITDETAILRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/AgeRatingItem.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAuditDetailAppAuditInfo.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini program approval details
                */
                class DescribeMNPVersionAuditDetailResp : public AbstractModel
                {
                public:
                    DescribeMNPVersionAuditDetailResp();
                    ~DescribeMNPVersionAuditDetailResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Approval number.</p>
                     * @return AuditNo <p>Approval number.</p>
                     * 
                     */
                    std::string GetAuditNo() const;

                    /**
                     * 设置<p>Approval number.</p>
                     * @param _auditNo <p>Approval number.</p>
                     * 
                     */
                    void SetAuditNo(const std::string& _auditNo);

                    /**
                     * 判断参数 AuditNo 是否已赋值
                     * @return AuditNo 是否已赋值
                     * 
                     */
                    bool AuditNoHasBeenSet() const;

                    /**
                     * 获取<p>Mini program or mini game appid.</p>
                     * @return MNPId <p>Mini program or mini game appid.</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini program or mini game appid.</p>
                     * @param _mNPId <p>Mini program or mini game appid.</p>
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取<p>Mini program or mini game name.</p>
                     * @return MNPName <p>Mini program or mini game name.</p>
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置<p>Mini program or mini game name.</p>
                     * @param _mNPName <p>Mini program or mini game name.</p>
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取<p>Mini program icon.</p>
                     * @return MNPIcon <p>Mini program icon.</p>
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置<p>Mini program icon.</p>
                     * @param _mNPIcon <p>Mini program icon.</p>
                     * 
                     */
                    void SetMNPIcon(const std::string& _mNPIcon);

                    /**
                     * 判断参数 MNPIcon 是否已赋值
                     * @return MNPIcon 是否已赋值
                     * 
                     */
                    bool MNPIconHasBeenSet() const;

                    /**
                     * 获取<p>Mini program category.</p>
                     * @return MNPType <p>Mini program category.</p>
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置<p>Mini program category.</p>
                     * @param _mNPType <p>Mini program category.</p>
                     * 
                     */
                    void SetMNPType(const std::string& _mNPType);

                    /**
                     * 判断参数 MNPType 是否已赋值
                     * @return MNPType 是否已赋值
                     * 
                     */
                    bool MNPTypeHasBeenSet() const;

                    /**
                     * 获取<p>Mini program introduction.</p>
                     * @return MNPIntro <p>Mini program introduction.</p>
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置<p>Mini program introduction.</p>
                     * @param _mNPIntro <p>Mini program introduction.</p>
                     * 
                     */
                    void SetMNPIntro(const std::string& _mNPIntro);

                    /**
                     * 判断参数 MNPIntro 是否已赋值
                     * @return MNPIntro 是否已赋值
                     * 
                     */
                    bool MNPIntroHasBeenSet() const;

                    /**
                     * 获取<p>Mini program version.</p>
                     * @return MNPVersion <p>Mini program version.</p>
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置<p>Mini program version.</p>
                     * @param _mNPVersion <p>Mini program version.</p>
                     * 
                     */
                    void SetMNPVersion(const std::string& _mNPVersion);

                    /**
                     * 判断参数 MNPVersion 是否已赋值
                     * @return MNPVersion 是否已赋值
                     * 
                     */
                    bool MNPVersionHasBeenSet() const;

                    /**
                     * 获取<p>Mini program version introduction.</p>
                     * @return MNPVersionIntro <p>Mini program version introduction.</p>
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置<p>Mini program version introduction.</p>
                     * @param _mNPVersionIntro <p>Mini program version introduction.</p>
                     * 
                     */
                    void SetMNPVersionIntro(const std::string& _mNPVersionIntro);

                    /**
                     * 判断参数 MNPVersionIntro 是否已赋值
                     * @return MNPVersionIntro 是否已赋值
                     * 
                     */
                    bool MNPVersionIntroHasBeenSet() const;

                    /**
                     * 获取<p>Applicant.</p>
                     * @return ApplyUser <p>Applicant.</p>
                     * 
                     */
                    std::string GetApplyUser() const;

                    /**
                     * 设置<p>Applicant.</p>
                     * @param _applyUser <p>Applicant.</p>
                     * 
                     */
                    void SetApplyUser(const std::string& _applyUser);

                    /**
                     * 判断参数 ApplyUser 是否已赋值
                     * @return ApplyUser 是否已赋值
                     * 
                     */
                    bool ApplyUserHasBeenSet() const;

                    /**
                     * 获取<p>Application time.</p>
                     * @return ApplyTime <p>Application time.</p>
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置<p>Application time.</p>
                     * @param _applyTime <p>Application time.</p>
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取<p>Approver.</p>
                     * @return AuditUser <p>Approver.</p>
                     * 
                     */
                    std::string GetAuditUser() const;

                    /**
                     * 设置<p>Approver.</p>
                     * @param _auditUser <p>Approver.</p>
                     * 
                     */
                    void SetAuditUser(const std::string& _auditUser);

                    /**
                     * 判断参数 AuditUser 是否已赋值
                     * @return AuditUser 是否已赋值
                     * 
                     */
                    bool AuditUserHasBeenSet() const;

                    /**
                     * 获取<p>Approval time.</p>
                     * @return AuditTime <p>Approval time.</p>
                     * 
                     */
                    std::string GetAuditTime() const;

                    /**
                     * 设置<p>Approval time.</p>
                     * @param _auditTime <p>Approval time.</p>
                     * 
                     */
                    void SetAuditTime(const std::string& _auditTime);

                    /**
                     * 判断参数 AuditTime 是否已赋值
                     * @return AuditTime 是否已赋值
                     * 
                     */
                    bool AuditTimeHasBeenSet() const;

                    /**
                     * 获取<p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * @return AuditStatus <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置<p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * @param _auditStatus <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of associated superapps.</p>
                     * @return MNPRelAppCount <p>Number of associated superapps.</p>
                     * 
                     */
                    int64_t GetMNPRelAppCount() const;

                    /**
                     * 设置<p>Number of associated superapps.</p>
                     * @param _mNPRelAppCount <p>Number of associated superapps.</p>
                     * 
                     */
                    void SetMNPRelAppCount(const int64_t& _mNPRelAppCount);

                    /**
                     * 判断参数 MNPRelAppCount 是否已赋值
                     * @return MNPRelAppCount 是否已赋值
                     * 
                     */
                    bool MNPRelAppCountHasBeenSet() const;

                    /**
                     * 获取<p>Information encoded in the mini program QR code.</p>
                     * @return QRCodeContent <p>Information encoded in the mini program QR code.</p>
                     * 
                     */
                    std::string GetQRCodeContent() const;

                    /**
                     * 设置<p>Information encoded in the mini program QR code.</p>
                     * @param _qRCodeContent <p>Information encoded in the mini program QR code.</p>
                     * 
                     */
                    void SetQRCodeContent(const std::string& _qRCodeContent);

                    /**
                     * 判断参数 QRCodeContent 是否已赋值
                     * @return QRCodeContent 是否已赋值
                     * 
                     */
                    bool QRCodeContentHasBeenSet() const;

                    /**
                     * 获取<p>Approval note.</p>
                     * @return AuditNote <p>Approval note.</p>
                     * 
                     */
                    std::string GetAuditNote() const;

                    /**
                     * 设置<p>Approval note.</p>
                     * @param _auditNote <p>Approval note.</p>
                     * 
                     */
                    void SetAuditNote(const std::string& _auditNote);

                    /**
                     * 判断参数 AuditNote 是否已赋值
                     * @return AuditNote 是否已赋值
                     * 
                     */
                    bool AuditNoteHasBeenSet() const;

                    /**
                     * 获取<p>Mini program version ID.</p>
                     * @return MNPVersionId <p>Mini program version ID.</p>
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置<p>Mini program version ID.</p>
                     * @param _mNPVersionId <p>Mini program version ID.</p>
                     * 
                     */
                    void SetMNPVersionId(const int64_t& _mNPVersionId);

                    /**
                     * 判断参数 MNPVersionId 是否已赋值
                     * @return MNPVersionId 是否已赋值
                     * 
                     */
                    bool MNPVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Age rating information.</p>
                     * @return AgeRatings <p>Age rating information.</p>
                     * 
                     */
                    std::vector<AgeRatingItem> GetAgeRatings() const;

                    /**
                     * 设置<p>Age rating information.</p>
                     * @param _ageRatings <p>Age rating information.</p>
                     * 
                     */
                    void SetAgeRatings(const std::vector<AgeRatingItem>& _ageRatings);

                    /**
                     * 判断参数 AgeRatings 是否已赋值
                     * @return AgeRatings 是否已赋值
                     * 
                     */
                    bool AgeRatingsHasBeenSet() const;

                    /**
                     * 获取<p>Superapp approval information.</p>
                     * @return AppAuditList <p>Superapp approval information.</p>
                     * 
                     */
                    std::vector<DescribeMNPAuditDetailAppAuditInfo> GetAppAuditList() const;

                    /**
                     * 设置<p>Superapp approval information.</p>
                     * @param _appAuditList <p>Superapp approval information.</p>
                     * 
                     */
                    void SetAppAuditList(const std::vector<DescribeMNPAuditDetailAppAuditInfo>& _appAuditList);

                    /**
                     * 判断参数 AppAuditList 是否已赋值
                     * @return AppAuditList 是否已赋值
                     * 
                     */
                    bool AppAuditListHasBeenSet() const;

                private:

                    /**
                     * <p>Approval number.</p>
                     */
                    std::string m_auditNo;
                    bool m_auditNoHasBeenSet;

                    /**
                     * <p>Mini program or mini game appid.</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Mini program or mini game name.</p>
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * <p>Mini program icon.</p>
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * <p>Mini program category.</p>
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * <p>Mini program introduction.</p>
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * <p>Mini program version.</p>
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * <p>Mini program version introduction.</p>
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * <p>Applicant.</p>
                     */
                    std::string m_applyUser;
                    bool m_applyUserHasBeenSet;

                    /**
                     * <p>Application time.</p>
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * <p>Approver.</p>
                     */
                    std::string m_auditUser;
                    bool m_auditUserHasBeenSet;

                    /**
                     * <p>Approval time.</p>
                     */
                    std::string m_auditTime;
                    bool m_auditTimeHasBeenSet;

                    /**
                     * <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * <p>Number of associated superapps.</p>
                     */
                    int64_t m_mNPRelAppCount;
                    bool m_mNPRelAppCountHasBeenSet;

                    /**
                     * <p>Information encoded in the mini program QR code.</p>
                     */
                    std::string m_qRCodeContent;
                    bool m_qRCodeContentHasBeenSet;

                    /**
                     * <p>Approval note.</p>
                     */
                    std::string m_auditNote;
                    bool m_auditNoteHasBeenSet;

                    /**
                     * <p>Mini program version ID.</p>
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * <p>Age rating information.</p>
                     */
                    std::vector<AgeRatingItem> m_ageRatings;
                    bool m_ageRatingsHasBeenSet;

                    /**
                     * <p>Superapp approval information.</p>
                     */
                    std::vector<DescribeMNPAuditDetailAppAuditInfo> m_appAuditList;
                    bool m_appAuditListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPVERSIONAUDITDETAILRESP_H_
